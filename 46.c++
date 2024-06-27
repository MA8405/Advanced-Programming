#include <iostream>
using namespace std;

class Ratio
{
    friend Ratio operator*(const Ratio &x, const Ratio &);

public:
    Ratio(int a, int b) : num(a), den(b) {}

    ~Ratio() {}
    void assign(int a, int b)
    {
        num = a;

        den = b;
    }
    void Print() const { cout << num << " / " << den; }

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
    c = a * b;
    c.Print()
}