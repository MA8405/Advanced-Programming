// تابع مرتب‌سازی صعودی آرایه‌ای ان تایی به روش حبابی و نمایش آرایه مرتب شده

#include <iostream>
using namespace std;

void BS(float x[], int n)
{
    int i, j;

    float temp;

    for (i = n - 1; i > 0; i--)

        for (j = 0; j < i; j++)

            if (x[j] > x[j + 1])
            {
                temp = x[j];

                x[j] = x[j + 1];

                x[j + 1] = temp;
            }
}

int main()
{
    float x[5];

    int i;

    cout << "Enter 5 numbers: " << endl;

    for (i = 0; i < 5; i++)

        cin >> x[i];

    BS(x, 5);

    cout << endl;
    cout << "Sorted numbers: " << endl;

    for (i = 0; i < 5; i++)

        cout << x[i] << endl;

    return 0;
}