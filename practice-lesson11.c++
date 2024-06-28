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

    Ratio &operator++() // Prefix
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

private:
    int num, den;
};

int main()
{
    Ratio x(3, 5), y(4, 8);
    ++x;
    x.Print();
    y++;
    y.Print();
    return 0;
}