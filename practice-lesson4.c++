// خواندن ۱۰۰ رکورد دانشجویی و مرتب سازی طبق آیدی

#include <iostream>
using namespace std;
#define n 100

struct Student
{
    int ID;
    char name[50];
};

Student Read(void)
{
    Student x;
    cin >> x.ID >> x.name;
    return x;
}

int Min(Student x[], int l, int u)
{
    int indexMin = l, i;
    for (i = l + 1; i <= u; i++)
        if (x[indexMin].ID > x[i].ID)
            indexMin = i;
    return indexMin;
}

void Swap(Student *a, Student *b)
{
    Student temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(Student x[])
{
    int i, indexMin;
    for (i = 0; i < n; i++)
    {
        indexMin = Min(x, i, n - 1);
        Swap(&x[i], &x[indexMin]);
    }
}

void Print(Student x)
{
    cout << x.ID << x.name << endl;
}

int main()
{
    Student Dept[n];
    int i;
    for (i = 0; i < n; i++)
        Dept[i] = Read();
    Sort(Dept);
    for (i = 0; i < n; i++)
    {
        Print(Dept[i]);
    }

    return 0;
}