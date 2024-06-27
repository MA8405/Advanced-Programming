#include <iostream>
using namespace std;

class Ratio
{
public:
    Ratio(int a = 0, int b = 1) : num(a), den(b) {};

    Ratio &operator=(const Ratio &r)
    {
        num = r.num;
        den = r.den;
        return *this;
    }

private:
    int num, den;
};

int main()
{
    Ratio x, y, z(5, 8);

    x = y = z;

    return 0;
}