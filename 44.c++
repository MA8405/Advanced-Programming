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
    Ratio x(3, 7);

    Ratio y(x);

    Ratio z;

    z = y;

    return 0;
}