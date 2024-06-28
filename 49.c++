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

    Ratio &operator++() // Prefix form ++x
    {
        num = num + den;

        den = den;

        return (*this);
    }

    // Ratio &operator++(int) // Postfix form x++
    // {
    //     num = num + den;

    //     den = den;

    //     return (*this);
    // }

private:
    int num, den;
};

int main()
{
    Ratio x(2, 3), y(3, 5);

    ++x; // x = 5/7

    x.Print();

    // y++; // y = 8/5 // Postfix form y++

    // y.Print();

    return 0;
}