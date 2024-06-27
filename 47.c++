// بارگزاری مجدد عملگر *=, /=, +-, -=, ... برای کلاس ریشیو
class Ratio
{
    friend Ratio operator*();

public:
    Ratio &operator=(const Ratio &);
    Ratio &operator*=(const Ratio &r)
    {
        num = num * r.num;
        den = den * r.num;
        return (*this);
    }
};

int main()
{
    Ratio a(3, 7), b(2, 5), c(5, 2);
    a = a * b;
    c *= b
}