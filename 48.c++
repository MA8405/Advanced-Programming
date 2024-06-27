// بارگزاری مجدد عملگر رابطه‌ای ==,!=,<,>,>=,=> برای کلاس ریشیو

#include <iostream>
using namespace std;

class Ratio
{
    friend Ratio operator*(const Ratio &x, const Ratio &y);

    friend int operator==(const Ratio &, const Ratio &);

public:
    Ratio(int a = 0, int b = 1) : num(a), den(b) {};

    ~Ratio() {};

    Ratio &operator=(const Ratio &r)
    {
        num = r.num;

        den = r.den;

        return (*this);
    }

    Ratio &operator*=(const Ratio &r)
    {
        num = num * r.num;

        den = den * r.den;

        return (*this);
    }

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
