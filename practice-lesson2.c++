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
        cout << "Error";
        return;
    }
    if (n <= 20)
    {
        cout << "SmsCost: " << s;
        return;
    }
    s = s + ((n - 20) / 5) * 40;
    if ((n - 20) % 5 != 0)
        s = s + 40;

    cout << "SmsCost: " << s;
}

int main()
{
    cout << "Enter a number: " << endl;
    int x;
    cin >> x;
    SmsCost(x);

    return 0;
}