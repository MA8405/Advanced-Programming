// تابع جستجوی دودویی عدد کا در آرایه‌ای ان تایی و مرتب و بازگرداندن مکان آن در آرایه یا بازگرداندن مقدار -1

#include <iostream>
using namespace std;

int s22(float x[], int n, float k)
{
    int l = 0, u = n - 1, m;

    while (l <= u)
    {
        m = (l + u) / 2;

        if (x[m] == k)

            return m;

        if (x[m] > k)

            u = m - 1;

        else

            l = m + 1;
    }

    return -1;
}

int main()
{
    float x[5], k;

    int i, p;

    cout << "Enter 5 numbers: " << endl;

    for (i = 0; i < 5; i++)

        cin >> x[i];

    cout << "Enter a number to search: " << endl;

    cin >> k;

    p = s22(x, 5, k);

    if (p == -1)

        cout << "Not found";

    else

        cout << "Found in position " << p + 1;

    return 0;
}