// نقاط فضای ۳ بعدی، سازنده، مقدار دهی، چاپ، انداره، منفی کردن
// float x,y,z

// جمع دو بردار با انتخاب پوینت
// A = B + C

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    Point(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {} // سازنده

    void SetPoint(float a, float b, float c) // مقدار دهی
    {
        x = a;
        y = b;
        z = c;
    }

    void Print() { cout << "(" << x << ',' << y << ',' << z << ")\n"; } // چاپ

    // Norm for measure length or size
    float Norm() // اندازه
    {
        return (sqrt(x * x + y * y + z * z));
    }

    void Neg() // منفی کردن
    {
        x = -x;
        y = -y;
        z = -z;
    }

    float X() { return (x); }
    float Y() { return (y); }
    float Z() { return (z); }

private: // نقاط فضای ۳ بعدی
    float x, y, z;
};

int main()
{
    Point P1, P2(7.5), P3(2.5, 1.2), P4(1, 3, -2); // تولید ۴ شی از کلاس پوینت

    P3.SetPoint(2.2, 1.5, 3.25);

    P4.Print();

    cout << "|P4| = " << P4.Norm() << endl;

    P3.Neg();

    P3.Print();

    // A = B + C

    Point A, B(1.0, 2.0, 3.0), C(-0.5, 1.0, 2.0);

    A.SetPoint(B.X() + C.X(), B.Y() + C.Y(), B.Z() + C.Z());

    A.Print();

    return 0;
}