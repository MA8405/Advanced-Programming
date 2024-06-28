// کلاس پشته اعداد صحیح
// سازنذه، نابودگر،‌ اضافه کردن به پشته، حذف از پشته، برسی پر یا خالی بودن پشته

#include <iostream>
using namespace std;

class Stack
{
public:
    Stack(int size = 1000) : MaxSize(size)
    {
        top = -1;
        s = new int[size];
    }
    ~Stack()
    {
        delete[] s;
    }
    int IsFull()
    {
        if (top == MaxSzie - 1)
            return 1;
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
        {
            top++;
            *(s + top) = k;
        }
        cout << "Poshte por ast";
    }
    int DelS1()
    {
        top--;
        return *(s + top + 1);
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
};
