// فاکتوریل به روش غیر بازگشتی و بازگشتی

#include <iostream>
using namespace std;

// غیر بازگشتی

int f1(int n)
{
    int s = 1, i;

    for (i = 1; i <= n; i++)

        s = s * i;

    return s;
}

// بازگشتی

int f2(int n)
{
    if (n == 0)

        return (1);

    else

        return (n * f2(n - 1));
}

int main()
{
    cout << "Enter a number: " << endl;

    int x;

    cin >> x;

    cout << f1(x) << endl;

    cout << f2(x) << endl;

    return 0;
}

// 3! = 3 * 2!
// 2! = 2 * 1!
// 1! = 1 * 0!
// 0! = 1