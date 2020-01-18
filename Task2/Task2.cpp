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

class Sinclass
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
            summ+=(pow(-1,n)*pow(x,2*n+1))/fact(2*n+1);
        }
        return summ;
    }
    void Input(double x, int acc)
    {
        this->x=x;
        this->acc=acc;
    }

    Sinclass()
    {
        acc=0;
        x=0;
    }
    Sinclass(double x, int acc)
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
    Sinclass sin1(x,acc);
    cout<<sin1.calc();
    cout<<sin(x);//для проверки использую функцию sin
}