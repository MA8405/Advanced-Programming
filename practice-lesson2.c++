// تابعی که اطلاعات رکورد دانشجویی شامل نام، شماره دانشجویی، ۱۰ نمره در تابع خوانده و پس از محاسبه معدل، رکورد را به عنوان نتیجه تابع برگرداند

#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int ID;
    float No[10], ave;
};

Student Read(void);

int main()
{
    Student Dept[100];
    int i;
    for (i = 0; i < 100; i++)
        Dept[i] = Read();

    return 0;
}

Student Read(void)
{
    Student x;
    int i;
    float sum = 0;
    cin >> x.name >> x.ID;
    for (i = 0; i < 10; i++)
    {
        cin >> x.No[i];
        sum = sum + x.No[i];
    }
    x.ave = sum / 10;
    return x;
}