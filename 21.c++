// جستجوی دودویی عدد ایکس در آرایه ان تایی و مرتب آ

#include <iostream>
using namespace std;

int Find(float A[], int l, int u, float x)
{
    int m = (l + u) / 2;

    if (l > u)

        return (-1);

    if (x == A[m])

        return (m);

    if (x > A[m])

        return (Find(A, m + 1, u, x));

    else

        return (Find(A, l, m - 1, x));
}

int main()
{
    float T[100];

    int index;

    index = Find(T, 0, 99, 3.14);

    if (index == -1)

        cout << "Not found";

    else

        cout << "Found in: " << index;

    return 0;
}