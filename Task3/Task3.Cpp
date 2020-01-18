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

class Expclass
{
public:
    int acc;//точность вычислений
    double x;//значение
    long double calc()
    {
        long double summ=0;
        for (int n = 0; n < acc+1; n++)
        {
            //summ+=((-1)^n*x^(2n))/(2n)!
            summ+=(pow(x,n))/fact(n);
        }
        return summ;
    }
    void Input(double x, int acc)
    {
        this->x=x;
        this->acc=acc;
    }

    Expclass()
    {
        acc=0;
        x=0;
    }
    Expclass(double x, int acc)
    {
        this->x=x;
        this->acc=acc;
    }
};

int main()
{
    cout<<"Введите угол в радианах\n";
    double x;
    cin>>x;
    cout<<"Введите точность\n";
    int acc;
    cin>>acc;
    Expclass exp1(x,acc);
    cout<<exp1.calc()<<endl;
    cout<<exp(x)<<endl;//для проверки использую функцию exp
}