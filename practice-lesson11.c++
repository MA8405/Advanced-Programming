#include <iostream>
using namespace std;

class Ratio
{
    friend float ToFloat(Ratio);

public:
    Ratio(int a = 0, int b = 1) : num(a), den(b), r(float(a) / b)
    {
        cout << "An object born" << endl;
    }
    ~Ratio()
    {
        cout << "An object die" << endl;
    }

    float ToRatio() { return r; }

private:
    int num, den;
    float r;
};

float ToFloat(Ratio z)
{
    return z.r;
}

int main()
{
    Ratio x(2, 2);

    cout << ToFloat(x) << endl;

    cout << x.ToRatio() << endl;

    return 0;
}