// بارگزاری مجدد عملگر رابطه‌ای ++ برای کلاس ریشیو

#include <iostream>
using namespace std;
class Ratio
{
public:
    Ratio(int a, int b) : num(a), den(b) {};

    Ratio &operator++()
    {
        num = num + den;

        den = den;

        return (*this);
    }

    Ratio &operator++(int)
    {
        num = num + den;

        den = den;

        return (*this);
    }

    void Print()
    {
        cout << num << "/" << den << endl;
    }

private:
    int num, den;
};

int main()
{
    Ratio x(2, 3), y(3, 5);

    ++x; // x = 9/7

    x.Print();

    y++; // x = 9/7

    y.Print();

    return 0;
}