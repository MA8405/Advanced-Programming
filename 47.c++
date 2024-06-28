// بارگزاری مجدد عملگر پایین برای کلاس ریشیو
// *=

#include <iostream>
using namespace std;
class Ratio
{
    friend Ratio operator*(const Ratio &, const Ratio &);

public:
    Ratio(int a = 0, int b = 1) : num(a), den(b)
    {
        cout << "An object born" << endl;
    }

    ~Ratio()
    {
        cout << "An object die" << endl;
    }

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

    a = a * b;

    a.Print(); // a = 6/35

    c *= b;

    c.Print(); // c = 10/10

    return 0;
}