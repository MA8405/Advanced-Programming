// نقاط فضای ۳ بعدی، سازنده، مقدار دهی، چاپ، انداره، منفی کردن
// float x,y,z

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {}

    void SetPoint(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    void Print()
    {
        cout << "(" << x << ',' << y << ',' << z << ")\n";
    }

    float Norm()
    {
        return sqrt(x * x + y * y + z * z);
    }

    void Neg()
    {
        x = -x;
        y = -y;
        z = -z;
    }

private:
    float x, y, z;
};

int main()
{
    Point P1, P2(7.5), P3(2.5, 1.2), P4(1, 3, -2);

    P3.SetPoint(2.2, 1.5, 3);

    P4.Print();

    cout << "|0 - P4| = " << P4.Norm() << endl;

    P3.Neg();

    P3.Print();

    return 0;
}