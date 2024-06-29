#include <iostream>
using namespace std;

int fib1(int n)
{
    int a = 1, b = 1, c, i;
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int fib2(int n)
{
    if (n <= 2)
        return 1;
    else
        return fib2(n - 1) + fib2(n - 2);
}