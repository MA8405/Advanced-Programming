// بارگزاری مجدد عملگر *, /, +, -, % برای کلاس ریشیو

#include <iostream>
using namespace std;

class Ratio
{
    friend Ratio operator*(const Ratio &x, const Ratio &);

public:
    Ratio(int a = 0, int b = 1) : num(a), den(b) {};

    ~Ratio() {};

    void assign(int a, int b)
    {
        num = a;

        den = b;
    }

    void Print()
    {
        cout << num << " / " << den;
    }

    Ratio &operator=(const Ratio &r)
    {
        num = r.num;

        den = r.den;

        return (*this);
    }

private:
    int num,

        den;
};

Ratio operator*(const Ratio &x, const Ratio &y)
{
    Ratio z(x.num * y.num, x.den * y.den);

    return (z);
}

int main()
{
    Ratio a(3, 7), b(-5, 3), c;

    c = a * b; // c = -15/21

    c.Print();

    cout << endl;

    c = c * a; // c *= a

    c.Print();

    return 0;
}