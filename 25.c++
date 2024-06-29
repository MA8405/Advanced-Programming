#include <iostream>
using namespace std;

void Binary(int n)
{
    if (n == 0)

        return;

    else
    {
        Binary(n / 2);

        cout << n % 2;
    }
}

int main()
{
    Binary(37);

    return 0;
}