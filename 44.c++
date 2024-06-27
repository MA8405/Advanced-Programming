// بارگزاری عملگر = برای کلاس ریشیو

#include <iostream>
using namespace std;

class Ratio
{
public:
    Ratio(int a = 0, int b = 1) : num(a), den(b) {};

    void operator=(const Ratio &);

private:
    int num, den;
};

void Ratio::operator=(const Ratio &r)
{
    num = r.num;

    den = r.den;
}

int main()
{
    Ratio x(3, 7); // x = 3/7 // باتوجه به سازنده

    Ratio y(x); // y = 3/7 // باتوجه به سازنده کپی

    Ratio z;

    z = y; // z = 3/7 // باتوجه به عملگر مساوی =

    return 0;
}