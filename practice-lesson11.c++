// بارگزاری مجدد عملگر ++ برای کلاس ریشیو

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

    Ratio &operator++()
    {
        num = num + den;
        den = den;
        return *this;
        ;
    }

private:
    int num, den;
};

int main()
{
    Ratio x(3, 2);
    ++x;
    x.Print();

    return 0;
}