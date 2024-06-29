// تابعی ب م م دو عدد به دو روش غیر بازگشتی و بازگشتی

#include <iostream>
using namespace std;

// غیر بازگشتی

int BMM1(int a, int b) // پیاده سازی غیر بازگشتی از فرمول بازگشتی
{
    int c;

    while (b != 0)
    {
        c = a;

        a = b; // a(new) = b(old)

        b = c % b; // b(new) = a(old) % b(old)
    }

    return (a);
}

// بازگشتی

int BMM(int a, int b) // پیاده سازی بازگشتی
{
    if (b == 0)

        return (a);

    else

        return (BMM(b, a % b));
}

int main()
{
    cout << BMM(24, 32);

    return 0;
}