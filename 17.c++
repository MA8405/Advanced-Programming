// تابع فاکتوریل به دو روش غیر بازگشتی و بازگشتی

#include <iostream>
using namespace std;

// غیر بازگشتی

int f1(int n)
{
    int s = 1, i;

    for (i = 1; i <= n; i++)

        s = s * i;

    return (s);
}

// بازگشتی

int fact(int n)
{
    if (n == 0)

        return (1);

    else

        return (n * fact(n - 1));
}

int main()
{
    cout << fact(4);

    return 0;
}