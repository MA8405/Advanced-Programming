// خواندن اطلاعات ۱۰۰ دانشجو شامل نام، شماره دانشجویی و معدل
// سپس تولید آرایه‌ای از اشاره‌گر ها به این دانشجویان که طبق معدل مرتب باشند
// مرتب ساری حبابی

#include <iostream>
using namespace std;

struct student
{
    char name[20];
    int ID;
    float ave;
};

int main()
{
    student Dept[100], *Ave[100], *temp;

    int i, j;

    for (i = 0; i < 100; i++)
    {
        cin >> Dept[i].name >> Dept[i].ID >> Dept[i].ave;

        Ave[i] = &Dept[i];
    }

    for (i = 99; i > 0; i--) // تعیین داده مکان آی-ام

        for (j = 0; j < i; j++)

            if (Ave[j]->ave < Ave[j + 1]->ave)
            {
                temp = Ave[j];

                Ave[j] = Ave[j + 1];

                Ave[j + 1] = temp;
            }

    // چاپ داده های مرتب

    for (i = 0; i < 100; i++)

        cout << Ave[i]->ID << Ave[i]->ave << Ave[i]->name;

    return 0;

} // End of the main
