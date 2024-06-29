#include <iostream>
using namespace std;

int f1(int n)
{
    int s = 1;
    int i;
    for (i = 1; i <= n; i++)
        s = s * i;
    return s;
}

int f2(int n)
{

    if (n == 0)
        return 1;
    else
        return n * f2(n - 1);
}