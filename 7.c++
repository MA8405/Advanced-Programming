// تابع محاسبه حاصل ضرب داخلی دو بردار ان تایی از نوع عدد اعشاری و برگرداندن حاصل ضرب آن

#include <iostream>
using namespace std;

float m(float x[], float y[], int n)
{
    float z = 0;

    int i;

    for (i = 0; i < n; i++)

        z = z + (x[i] * y[i]);

    return z;
}

int main()
{
    float x[10], y[10];

    int i;

    cout << "Enter 10 numbers for array x: " << endl;

    for (i = 0; i < 10; i++)

        cin >> x[i];

    cout << "Enter 10 numbers for array y: " << endl;

    for (i = 0; i < 10; i++)

        cin >> y[i];

    cout << "x^t.y = " << m(x, y, 10);

    return 0;
}