// خواندن ۱۰۰ رکورد دانشجویی و مرتب سازی طبق آیدی

#include <iostream>
using namespace std;

#define n 100

struct Student
{
    char name[50];
    int ID;
};

Student Read(void); // takes no arguments (void) and returns a value of type student

void Sort(Student x[], int k);

int Min(Student x[], int l, int u);

void Swap(Student *a, Student *b);

void Print(Student x);

int main()
{
    int i;

    Student Dept[n];

    for (i = 0; i < n; i++)

        Dept[i] = Read();

    Sort(Dept, n);

    for (i = 0; i < n; i++)

        Print(Dept[i]);

    return 0;
}

Student Read(void)
{
    Student x;

    cin >> x.name >> x.ID;

    return x;
}

void Sort(Student x[], int k)
{
    int i, index;

    for (i = 0; i < n - 1; i++)
    {
        index = Min(x, i, k - 1);

        Swap(&x[i], &x[index]);
    }
}

int Min(Student x[], int l, int u)
{
    int indexMin = l, i;

    for (i = l + 1; i <= u; i++)

        if (x[i].ID < x[indexMin].ID)

            indexMin = i;

    return (indexMin);
}

void Swap(Student *a, Student *b)
{
    Student temp;

    temp = *a;

    *a = *b;

    *b = temp;
}

void Print(Student x)
{
    cout << x.name << x.ID << "\n";
}
