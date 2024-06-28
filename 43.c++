// مثال تابع دوست

#include <iostream>
using namespace std;
class Ratio
{
    friend float ToFloat(Ratio);

public:
    Ratio(int a = 0, int b = 1) : num(a), den(b)
    {
        cout << "An object born" << endl;
    }

    ~Ratio()
    {
        cout << "An object die" << endl;
    }

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