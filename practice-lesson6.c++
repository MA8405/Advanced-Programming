#include <iostream>
using namespace std;

int Find(float A[], int l, int u, float x)
{
    int m = (l + u) / 2;
    if (l > u)
        return -1;
    if (A[m] == x)
        return m;
    if (A[m] < x)
        return Find(A, m + 1, u, x);
    else
        return Find(A, l, m - 1, x);
}