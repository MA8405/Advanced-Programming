// تابعی که عدد صحیح ان را به عنوان تعداد کاراکترهای پیغام گرفته و هزینه را طبق فرمول زیر محاسبه و جاپ کند (نتیجه ای به محل فراخوانی برنمیگردد)

// تا 20 کاراکتر اول 100 ریال
// باازای هر 5 کاراکتر اضافه 40 ریال اضافه شود

#include <iostream>
using namespace std;

void SmsCost(int n)
{
    int s = 100;

    if (n <= 0)
    {
        cout << "Error" << endl;

        return;
    }

    // if (n <= 20)
    // {
    //     cout << "Smscost: " << s << endl;

    //     return;
    // }

    s = s + ((n - 20) / 5) * 40;

    if ((n - 20) % 5 != 0)

        s = s + 40;

    cout << "SmsCost: " << s << endl;
}

int main()
{
    int n;

    cout << "Enter the number of characters: " << endl;

    cin >> n;

    SmsCost(n);

    return 0;
}
