// بارگزاری مجدد عملگر = برای کلاس ریشیو
// x = y = z

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

    Ratio &operator=(const Ratio &r)
    {
        num = r.num;

        den = r.den;

        return (*this);
    }

private:
    int num, den;
};

int main()
{
    Ratio x, y, z(5, 9);

    x = y = z;

    x.Print();

    return 0;
}