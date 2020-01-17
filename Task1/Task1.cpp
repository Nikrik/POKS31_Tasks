using namespace std;
#include <iostream>
#include <math.h>
#include <cmath>
long double fact(int x)
{
    long double f=1;
    for (int i = 1; i < x+1; i++)
    {
        f*=i;
    }
        return f;
}
class Cosclass
{
public:
    int acc;//точность вычислений
    double x;//значение
    long double calc()
    {
        long double summ=0;
        for (int n = 0; n < acc+1; n++)
        {
            //summ+=((-1)^n*x^(2n))/(2n+1)!
            summ+=(pow(-1,n)*pow(x,2*n))/fact(2*n);
        }
        return summ;
    }
    Cosclass()
    {
        acc=0;
        x=0;
    }
    Cosclass(double x, int acc)
    {
        this->x=x;
        this->acc=acc;
    }
};

int main()
{
    Cosclass cos1(2,20);
    cout<<cos1.calc();
    cout<<cos(1);
}