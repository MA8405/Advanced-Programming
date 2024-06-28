#include <iostream>
using namespace std;

int BMM(int a, int b)
{
    int z;
    if (a < b)
    {
        z = a;
        a = b;
        b = z;
    }
    while (a != b)
    {
        z = a - b;
        if (b >= z)
        {
            a = b;
            b = z;
        }
        else
            a = z;
    }
    return a;
}

int main()
{
    cout << "Enter 2 numbers: ";
    int x, y;
    cin >> x >> y;
    cout << BMM(x, y);
    return 0;
}