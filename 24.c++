// مرتب سازی ادغام

#include <iostream>
using namespace std;

void MergeSort(float x[], int l, int u)
{
    int m = (l + u) / 2;

    if (l >= u)

        return;

    else
    {
        MergeSort(x, l, m);

        MergeSort(x, m + 1, u);

        Merge(x, l, m, u);
    }
}

void Merge(float x[], int l, int m, int u)
{
    float y[1000], *z;

    int i = l, j = m = 1, k = 0;

    z = new (float[u - l + 1]);

    while (i <= m && j <= u)
    {
        if (x[i] <= x[j])

        {
            y[k] = x[i];

            *(z + k) = x[i];

            i++;

            k++;
        }

        else
        {
            y[k] = x[j];

            *(z + k) = x[j];

            j++;

            k++;
        }
    }

    while (i <= m)
    {
        y[k] = x[i];

        *(z + k) = x[i];

        i++;

        k++;
    }

    while (j <= u)
    {
        y[k] = x[j];

        *(z + k) = x[j];

        j++;

        k++;
    }

    i = l;

    k = 0;

    while (i <= u)
    {
        x[i] = *(z + k);

        i++;

        k++;
    }
} // end of Merge

int main()
{
    float a[10], t[100];

    // خواندن a,t

    MergeSort(a, 0, 9);

    MergeSort(t, 0, 9);

    // چاپ a,t

    return 0;
}
