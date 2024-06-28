// تابعی که عدد صحیح ان را گرفته و مجموعه زیر را محاسبه کند و به عنوان نتیجه تابع به صورت عدد اعشاری برگرداند

// s = 4 (1 - (1 / 3i) + 1(1 / 5i) - ... +- 1 / ((2n + 1) i))

#include <iostream>
using namespace std;

float Sum(int n)
{
    int i, k = 1;
    float s = 0;
    for (i = 1; i <= 2 * n + 1; i = i + 2)
    {
        s = s + (float(k) / i);
        k = -k;
    }

    return 4 * s;
}

int main()
{
    cout << "Enter a number: " << endl;
    int x;
    cin >> x;
    cout << Sum(x) << endl;

    return 0;
}