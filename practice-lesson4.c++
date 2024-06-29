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
    int temp;
    temp = *a;
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
    int x = 1, y = 4, z = 9, a = 3, b = 9, c = 0;
    Swap1(x, y);
    cout << x << endl
         << y << endl;
    Swap2(&z, &a);
    cout << z << endl
         << a << endl;
    Swap3(b, c);
    cout << b << endl
         << c << endl;

    return 0;
}