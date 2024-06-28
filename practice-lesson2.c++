// تابعی که سه عدد اعشاری آ، ب، سی را بعنوان طول اضلاع مثلث گرقته و مساحت آن را طبق فرمول زیر محاسبه و به صورت عدد اعشاری برگرداند

// s = sqrt(m(m - a)(m - b)(m-c))
// m = (a + b + c) / 2

#include <iostream>
#include <cmath>
using namespace std;

float Area(float a, float b, float c)
{
    float m = (a + b + c) / 2;
    return sqrt(m * (m - a) * (m - b) * (m - c));
}

int main()
{
    cout << "Enter 3 numbers: ";
    float x, y, z;
    cin >> x >> y >> z;
    cout << Area(x, y, z);

    return 0;
}
