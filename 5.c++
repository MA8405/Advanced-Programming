// تابعی که سه عدد اعشاری آ، ب، سی را بعنوان طول اضلاع مثلث گرقته و مساحت آن را طبق فرمول زیر محاسبه و به صورت عدد اعشاری برگرداند

// s = sqrt(m(m - a)(m - b)(m - c))
// m = (a + b + c) / 2

#include <iostream>
#include <cmath>
using namespace std;

float Area(float a, float b, float c)
{
    float m = (a + b + c) / 2;

    return (sqrt(m * (m - a) * (m - b) * (m - c)));
}

int main()
{
    float a, b, c;

    cout << "Enter 3 numbers: " << endl;

    cin >> a >> b >> c;

    // if ((a + b > c) && (a + c > b) && (b + c > a))

    //     cout << Area(a, b, c);

    // else

    //     cout << "Error" << endl;

    return 0;
}