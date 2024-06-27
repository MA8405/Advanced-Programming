#include <iostream>
using namespace std;

class Ratio
{
public:
    Ratio(int a, int b) : num(a), den(b) {};

    void Print()
    {
        cout << num << "/" << den << endl;
    }

    Ratio &operator++()
    {
        num = num + den;

        den = den;

        return *this;
    }

    Ratio &operator++(int)
    {
        num = num + den;

        den = den;

        return *this;
    }

private:
    int num, den;
};

int main()
{
    Ratio x(2, 3), y(5, 4);

    x++;

    x.Print();

    ++y;

    y.Print();

    return 0;
}
