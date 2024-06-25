// تابعی که اطلاعات رکورد دانشجویی شامل نام، شماره دانشجویی، ۱۰ نمره در تابع خوانده و پس از محاسبه معدل، رکورد را به عنوان نتیجه تابع برگرداند

#include <iostream>
using namespace std;

struct student
{
    char name[50];

    int ID;

    float No[10], ave;
};

student Read(void);

int main()
{
    student Dept[100];

    int i;

    for (i = 0; i < 100; i++)
        Dept[i] = Read();

    return 0;
}

student Read()
{
    student x;

    int i;

    float sum = 0;

    cout << "Enter name and ID: " << endl;
    cin >> x.name >> x.ID;

    cout << "Enter 10 numbers: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> x.No[i];
        sum = sum + x.No[i];
    }

    x.ave = sum / 10;

    return (x);
}
