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
        cout << "(" << x << "," << y << "," << z << ")\n"
             << endl;
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
    Point P1, P2;
    P1.SetPoint(3, 4, 5);
    P1.Print();
    cout << P1.Norm() << endl;
    P1.Neg();
    P1.Print();

    return 0;
}