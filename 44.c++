// بارگزاری عملگر = برای کلاس ریشیو

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
    Ratio x(3, 7); // x = 3/7 // باتوجه به سازنده

    x.Print();

    Ratio y(x); // y = 3/7 // باتوجه به سازنده کپی

    y.Print();

    Ratio z;

    z = y; // z = 3/7 // باتوجه به عملگر مساوی =

    z.Print();

    return 0;
}