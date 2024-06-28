// تابع جستجوی خطی عدد کا در آرایه‌ای ان تایی و بازگرداندن مکان آن در آرایه (در صورت وجود) یا بازگرداندن -1 (در صورت عدم وجود)

#include <iostream>
using namespace std;

int Search(float x[], int n, float k)
{
    int i;

    for (i = 0; i < n; i++)

        if (x[i] == k)

            return i;

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

    p = Search(x, 5, k);

    if (p == -1)

        cout << "Not found";

    else

        cout << "Found in position " << p + 1;

    return 0;
}