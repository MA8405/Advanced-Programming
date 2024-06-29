// جابه‌جایی مقادیر دو متغیر صحیح

#include <iostream>
using namespace std;

void Swap1(int a, int b)
{
    int temp = a;

    a = b;

    b = temp;
}

void Swap2(int *a, int *b)
{
    int temp = *a;

    *a = *b;

    *b = temp;
}

void Swap3(int &a, int &b)
{
    int temp = a;

    a = b;

    b = temp;
}

int main()
{
    cout << "Enter 6 numbers: " << endl;

    int a, b, c, x, y, z;

    cin >> a >> b >> x >> y >> c >> z;

    Swap1(a, b);
    cout << a << " " << b << endl;

    Swap2(&x, &y);
    cout << x << " " << y << endl;

    Swap3(c, z);
    cout << c << " " << z << endl;

    return 0;
}
