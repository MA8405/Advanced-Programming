// کلاس پشته اعداد صحیح
// سازنذه، نابودگر،‌ اضافه کردن به پشته، حذف از پشته، برسی پر یا خالی بودن پشته

#include <iostream>
using namespace std;

class Stack
{
public:
    Stack(int size = 1000) : MaxSize(size)
    {
        top = -1; // پشته خالی

        s = new int[size];
    }

    ~Stack()
    {
        delete[] s;
    }

    int IsFull()
    {
        if (top == MaxSize - 1)

            return 1; // پشته پر است

        else

            return 0;
    }

    int IsEmpty()
    {
        if (top == -1)

            return 1;

        else

            return 0;
    }

    void AddS(int k)
    {
        if (top < MaxSize - 1)

        { // پشته پر نیست

            top++;

            *(s + top) = k; // s[top] = K
        }
        cout << "poshte por ast" << endl;
    }

    int DelS1()
    { // با فرض غیر خالی بودن پشته عنصر بالای پشته را برمیگردانیم
        top--;

        return (*(s + top + 1));
    }

    int DelS2(int *k)
    {
        if (top == -1)

            return 0;

        *k = *(s + top);

        top--;

        return 1;
    }

private:
    int top, *s, MaxSize;
}; // end of class Stack

int main()
{
    Stack A, B(10);

    int k;

    if (A.IsEmpty() == 0)

        cout << A.DelS1() << endl;

    B.AddS(23);

    B.AddS(-9);

    cout << "Enter a number: " << endl;

    cin >> k; // k = 123

    B.AddS(k);

    if (B.IsFull() != 1)

        B.AddS(37);

    if (B.IsEmpty() == 0)
    {

        k = B.DelS1();

        cout << k << endl;
    }

    // حذف مجدد

    if (B.DelS2(&k) == 1)

        cout << k << endl;

    return 0;
}