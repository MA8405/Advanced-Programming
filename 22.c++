// پیدا کردن ماکس و مین در آرایه و بازگرداندن هر دو مقدار و جاپ آنها در مین

#include <iostream>
using namespace std;

void MaxMin(float x[], int n, int *index1, int *index2)
{
    int i;

    *index1 = 0;

    *index2 = 0;

    for (i = 1; i < n; i++)
    {
        if (x[i] > x[*index1])

            *index1 = i;

        else if (x[i] < x[*index2])

            *index2 = i;
    }
}

int main()
{
    float a[100];

    int Imax, Imin;

    // خواندن a

    MaxMin(a, 100, &Imax, &Imin);

    cout << Imax << Imin;

    return 0;
}