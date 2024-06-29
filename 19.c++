// تابع جمله ان ام دنباله فیبوناجی به دو روش غیر بازگشتی و بازگشتی

#include <iostream>
using namespace std;

// غیر بازگشتی

int f1(int n) // پیاده سازی غیر بازگشتی از فرمول بازگشتی
{
    int a = a, b = 1, c, i;

    for (i = 3; i < n; i++)
    {
        c = a + b;

        a = b;

        b = c;
    }
    return (c);
}

// بازگشتی

int fib(int n) /// پیاده سازی بازگشتی
{
    if (n <= 2)

        return (1);

    else

        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    cout << fib(5);

    return 0;
}
