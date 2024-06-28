// تابع جستجوی عنصر مینیمم آرایه‌ای ان تایی و بازگرداندن مکان آن

#include <iostream>
using namespace std;

int Min(float x[], int n)
{
    int i, indexMin = 0;

    for (i = 1; i < n; i++)

        if (x[i] < x[indexMin])

            indexMin = i;

    return indexMin;
}

int main()
{
    float x[5];

    int i;

    cout << "Enter 5 numbers: " << endl;

    for (i = 0; i < 5; i++)

        cin >> x[i];

    int indexMin = Min(x, 5);

    cout << "The position of the minimum value is: " << indexMin + 1 << endl;

    cout << "The minimum value is: " << x[indexMin] << endl;

    return 0;
}