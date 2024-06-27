// تابعی که 3 عدد صحیح را به عنوان یک نقطه از مختصات میگیرد و فاطله نقطه تا مبدا را محاسبه می‌کند و به صورت عدداعشاری برمیگرداند

#include <iostream>
#include <cmath>
using namespace std;

float f(int a, int b, int c)
{
    float z;

    z = (sqrt(a * a + b * b + c * c));

    return z;
}

int main()
{
    int a, b, c;

    cout << "Enter 3 numbers: " << endl;

    cin >> a >> b >> c;

    cout << f(a, b, c) << endl;

    return 0;
}