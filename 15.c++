// خواندن ۱۰۰ رکورد دانشجویی و مرتب سازی طبق آیدی

#include <iostream>
using namespace std;

#define n 100

struct student
{
    char name[50];
    int ID;
};

student Read(void); // takes no arguments (void) and returns a value of type student

void sort(student x[], int k);

void print(student x);

int main()
{
    int i;

    student Dept[n];

    for (i = 0; i < n; i++)

        Dept[i] = Read();

    sort(Dept, n);

    for (i = 0; i < n; i++)

        print(Dept[i]);

    return 0;
}

int Min(student x[], int l, int u)
{
    int indexMin = l, i;

    for (i = l + 1; i <= u; i++)

        if (x[i].ID < x[indexMin].ID)

            indexMin = i;

    return (indexMin);
}

void swap(student *a, student *b)
{
    student temp;

    temp = *a;

    *a = *b;

    *b = temp;
}

student Read()
{
    student x;

    cin >> x.name >> x.ID;

    return x;
}

void print(student x)
{
    cout << x.name << x.ID << "\n";
}

void sort(student x[], int k)
{
    int i, index;

    for (i = 0; i < n - 1; i++)
    {
        index = Min(x, i, k - 1);

        swap(&x[i], &x[index]);
    }
}