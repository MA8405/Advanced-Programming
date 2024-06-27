// کلاس کار با اعداد کسری آ/ب
// مدل بدنه تابع خارج

#include <iostream>
using namespace std;

class Ratio
{
public:
    void Assign(int, int); // مقدار دهی شی

    void Print(); // چاپ اطلاعات شی

    float r; // مقدار اعشاری عدد کسری

private:
    int num; /// عدد صورت

    int den; // عدد مخرج
};

void Ratio::Assign(int s, int m)
{
    num = s;

    den = m;

    r = float(s) / m;
}

void Ratio::Print()
{
    cout << num << '/' << den << " = " << r;
}

int main()
{
    Ratio x;

    // x.r = 3.75; // Professor didn't comment this but its unnecessary

    // x.num = 7 is wrong

    x.Assign(5, 2); // x = 5/2

    x.Print(); // Print 5/2 = 2.5

    return 0;
}