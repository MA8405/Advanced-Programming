// خواندن اطلاعات ۱۰۰ دانشجو شامل نام، شماره دانشجویی و معدل
// سپس تولید آرایه‌ای از اشاره‌گر ها به این دانشجویان که طبق معدل مرتب باشند
// مرتب ساری حبابی

#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int ID;
    float ave;
};

int main()
{
    Student Dept[100], *Ave[100], *temp;

    int i, j;
    for (i = 0; i < 100; i++)
    {
        cin >> Dept[i].name >> Dept[i].ID >> Dept[i].ave;
        Ave[i] = &Dept[i];
    }
    for (i = 99; i > 0; i--)
        for (j = 0; j < i; j++)
            if (Ave[j]->ave < Ave[j + 1]->ave)
            {
                temp = Ave[j];
                Ave[j] = Ave[j + 1];
                Ave[j + 1] = temp;
            }

    for (i = 0; i < 100; i++)
    {
        cout << Ave[i]->ID << Ave[i]->name << Ave[i]->ave;
    }
    return 0;
}