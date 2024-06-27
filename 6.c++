// تابعی که دو عدد صحیح آ و ب را گرفته و بزرگترین مقسوم‌علیه‌مشترک آن دو را طبق الگوریتم اقلیدسی زیر محاسبه و به صورت عدد صحیح برگرداند

#include <iostream>
using namespace std;

int BMM(int a, int b)
{
    int z;

    if (a < b)
    {
        z = a;
        a = b;
        b = z;
    }

    while (a != b)
    {
        z = a - b;

        if (b >= z)
        {
            a = b;
            b = z;
        }
        else
        {
            a = z;
            b = b;
        }
    }

    return a;
}

int main()
{
    int a, b;

    cout << "Enter 2 numbers: " << endl;

    cin >> a >> b;

    cout << "BMM: " << BMM(a, b) << endl;

    return 0;
}