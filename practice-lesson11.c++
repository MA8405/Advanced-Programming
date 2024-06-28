#include <iostream>
using namespace std;

class Ratio
{
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
    Ratio x(3, 2);
    x.Print();
    Ratio y(x);
    y.Print();
    Ratio z;

    z = y;
    z.Print();

    return 0;
}