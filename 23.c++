// جستجوی ماکسیمم بصورت بازگشتی
#include <iostream>
using namespace std;

int Imax(float x[], int l, int u)
{
    if (l == u)

        return (l);

    else
    {
        int m = (l + u) / 2, I1, I2;

        I1 = Imax(x, l, m);

        I2 = Imax(x, m + 1, u);

        if (x[I1] > x[I2])

            return (I1);

        else

            return (I2);
    }
}

int main()
{
    float a[1000];

    // خواندن

    cout << "Maximum is in index: " << Imax(a, 0, 999);

    return 0;
}