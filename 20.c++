// تابع محاسبه توان ان عددی اعشار و بازگرداندن آن
// با فرض مثبت بودن ان

#include <iostream>
using namespace std;

float p1(float x, int n)
{
    if (n == 0)

        return (1);

    else

        return (x * p1(x, n - 1));
}

// Better
float p2(float x, int n)
{
    float p;

    if (n == 0)

        return (1);

    else
    {
        p = p2(x, n / 2);

        if (n % 2 == 0)

            return (p * p);

        else

            return (x * p * p);
    }
}

int main()
{
    float x;
    int n;

    cout << "Enter the base for : ";
    cin >> x;

    cout << "Enter the exponent: ";
    cin >> n;

    cout << "p1: " << p1(x, n) << endl;

    cout << "p2: " << p2(x, n) << endl;

    return 0;
}