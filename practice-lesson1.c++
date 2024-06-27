#include <iostream>
#include <cmath>
using namespace std;

float f(int a, int b, int c)
{
    return sqrt(a * a + b * b + c * c);
}

int main()
{
    cout << "Enter 3 numbers: " << endl;
    int x, y, z;
    cin >> x >> y >> z;

    cout << f(x, y, z) << endl;

    return 0;
}