// تابع مرتب‌ سازی صعودی آرایه ای ان تایی و نمایش آرایه مرتب شده

#include <iostream>
using namespace std;

void Sort(float x[], int n);
int Min(float x[], int l, int u);

int main()
{
    float x[5];

    int i;

    cout << "Enter 5 numbers: " << endl;

    for (i = 0; i < 5; i++)

        cin >> x[i];

    Sort(x, 5);

    cout << endl;
    cout << "Sorted numbers: " << endl;

    for (i = 0; i < 5; i++)

        cout << x[i] << endl;

    return 0;
}

void Sort(float x[], int n)
{
    int i, index;

    float temp;

    for (i = 0; i < n; i++)
    {
        index = Min(x, i, n - 1);

        temp = x[i];

        x[i] = x[index];

        x[index] = temp;
    }
}

int Min(float x[], int l, int u)
{
    int i, indexMin = l;

    for (i = l + 1; i <= u; i++)

        if (x[i] < x[indexMin])

            indexMin = i;

    return indexMin;
}
