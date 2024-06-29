// جابه‌جایی مقادیر دو متغیر صحیح

#include <iostream>
using namespace std;

void swap1(int a, int b)
{
    int temp = a;

    a = b;

    b = temp;
}

void swap2(int *a, int *b)
{
    int temp = *a;

    *a = *b;

    *b = temp;
}

void swap3(int &a, int &b)
{
    int temp = a;

    a = b;

    b = temp;
}

int main()
{
    int x = 7, y = 3, a = 5, b = 9, c = 4;

    swap1(a, b);
    cout << a << " " << b << endl;

    swap2(&x, &y);
    cout << x << " " << y << endl;

    swap3(b, c);
    cout << b << " " << c << endl;

    return 0;
}
