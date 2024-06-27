// بارگزاری مجدد عملگر رابطه‌ای == برای کلاس ریشیو

#include <iostream>
using namespace std;

class Ratio
{
    friend Ratio operator*(const Ratio &x, const Ratio &);

    friend int operator==(const Ratio &, const Ratio &);

public:
    Ratio(int a, int b) : num(a), den(b) {};

    Ratio &operator=(const Ratio &);

    Ratio &operator*=(const Ratio &r);

private:
    int num, den;
};

int operator==(const Ratio &x, const Ratio &y)
{
    if (x.num * y.den == x.den * y.num)
        return (1);
    else
        return (0);
}

int main()
{
    Ratio a(3, 7), b(6, 14);

    if (a == b)
        cout << "Mosaviyand";
    else
        cout << "Na Mosaviyand";

    return 0;
}
