// بارگزاری مجدد عملگر *=, /=, +-, -=, ... برای کلاس ریشیو

#include <iostream>
using namespace std;
class Ratio
{
    friend Ratio operator*(const Ratio &x, const Ratio &);

public:
    Ratio(int a, int b) : num(a), den(b) {};

    void Print()
    {
        cout << num << "/" << den << endl;
    }

    Ratio &operator=(const Ratio &);

    Ratio &operator*=(const Ratio &r)
    {
        num = num * r.num;

        den = den * r.num;

        return (*this);
    }

private:
    int num, den;
};

int main()
{
    Ratio a(3, 7), b(2, 5), c(5, 2);

    a = a * b; // a = 6/35

    c *= b; // c = 10/10

    return 0;
}