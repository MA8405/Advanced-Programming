// بارگزاری مجدد عملگر *=, /=, +-, -=, ... برای کلاس ریشیو

#include <iostream>
using namespace std;
class Ratio
{
    friend Ratio operator*(const Ratio &x, const Ratio &y);

public:
    Ratio(int a = 0, int b = 1) : num(a), den(b) {};

    ~Ratio() {};

    void Print()
    {
        cout << num << "/" << den << endl;
    }

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

Ratio operator*(const Ratio &x, const Ratio &y)
{
    Ratio z(x.num * y.num, x.den * y.den);

    return (z);
}

int main()
{
    Ratio a(3, 7), b(2, 5), c(5, 2);

    a = a * b; // a = 6/35
    a.Print();

    c *= b; // c = 10/10
    c.Print();

    return 0;
}