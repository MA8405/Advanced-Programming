#include <iostream>
using namespace std;

void H(int n, char x, char y, char z)
{
    if (n == 1)

        cout << "Move from " << x << " to " << z;

    else
    {
        H(n - 1, x, z, y);

        cout << "Move from " << x << " to " << z;

        H(n - 1, y, x, z);
    }
}

int main()
{
    H(3, 'A', 'B', 'C');

    return 0;
}