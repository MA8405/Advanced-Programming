// کلاس ماتریکس های 2*2
// سازنده، چاپ، مقدار دهی، دترمینان، وارون کردن، برسی وارون پزیری، سازنده کپی

#include <iostream>
using namespace std;

class Matrix
{
public:
    Matrix(float a = 1, float b = 0, float c = 0, float d = 1)
    {
        x[0][0] = a;
        x[0][1] = b;
        x[1][0] = c;
        x[1][1] = d;
        Det = a * d - c * b;
    }

    void Print()
    {
        cout << x[0][0] << endl
             << x[0][1] << endl
             << x[1][0] << endl
             << x[1][1] << endl;
    }

    void SetMatrix(float a, float b, float c, float d)
    {
        x[0][0] = a;
        x[0][1] = b;
        x[1][0] = c;
        x[1][1] = d;
        Det = a * d - b * c;
    }

    int HaveInverse()
    {
        if (Det != 0)
            return 1;
        else
            return 0;
    }

    void Inverse()
    {
        float a, b, c, d;
        a = x[0][0];
        b = x[0][1];
        c = x[1][0];
        d = x[1][1];
        if (Det != 0)
        {
            x[0][0] = d / Det;
            x[0][1] = -c / Det;
            x[1][0] = -b / Det;
            x[1][1] = a / Det;
            Det = x[0][0] * x[1][1] - x[1][0] * x[0][1];
        }
    }
    Matrix(const Matrix &y)
    {
        x[0][0] = y.x[0][0];
        x[0][1] = y.x[0][1];
        x[1][0] = y.x[1][0];
        x[1][1] = y.x[1][1];
        Det = y.Det;
    }
    float D() { return Det; }

private:
    float x[2][2], Det;
};

int main()
{
    Matrix I, A(2, 3, -1.4);
    I.Print();
    A.SetMatrix(1, 2, 34, 2);
    cout << "|A| = " << A.D();
    if (A.HaveInverse() == 1)
        cout << "A varon pazire";
    Matrix A_1(A);
    A_1.Inverse();
    A.Print();
    A_1.Print();
}