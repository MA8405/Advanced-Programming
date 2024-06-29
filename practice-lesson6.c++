#include <iostream>
using namespace std;

float p1(float x, int n)
{
    if (n == 0)
        return 1;
    else
        return x * p1(x, n - 1);
}

float p2(float x, int n)
{
    float p;
    if (n == 0)
        return 1;
    else
    {
        p = p2(x, n / 2);
        if (n % 2 == 0)
            return p * p;
        else
            return x * p * p;
    }
}