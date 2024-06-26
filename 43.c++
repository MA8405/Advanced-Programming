#include <iostream>
using namespace std;
class Ratio
{
    friend float ToFloat(Ratio);

public:
    Ratio(int a, int b) : num(a), den(b), r(float(a) / b)
    {
        cout << "An object born.\n";
    }

    ~Ratio() { cout << "An object die.\n"; }

    float ToRatio() { return (r); }

private:
    int num, den;

    float r;
};

float ToFloat(Ratio z)
{
    return (z.r);
}

int main()
{
    Ratio x(3, 7);

    cout << "3/7 = " << x.ToRatio() << endl;

    cout << "3/7 = " << ToFloat(x) << endl;

    return 0;
}