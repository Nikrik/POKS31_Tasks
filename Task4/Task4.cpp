using namespace std;
#include <iostream>
#include <math.h>
#include <cmath>

class Factclass
{
public:
    double x;//значение
    long double calc()
    {
        long double f=1;
        for (int i = 1; i < x+1; i++)
        {
            f*=i;
        }
        return f;
    }
    void Input(double x)
    {
        this->x=x;
    }

    Factclass()
    {
        x=0;
    }
    Factclass(double x)
    {
        this->x=x;
    }
};

int main()
{
    cout<<"Введите число\n";
    double x;
    cin>>x;
    Factclass fact1(x);
    cout<<fact1.calc();
}