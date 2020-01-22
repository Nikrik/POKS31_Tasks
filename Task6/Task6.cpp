using namespace std;
#include <iostream>
#include <math.h>
#include <cmath>

class Quadclass
{
public:

    int a,b,c;

    double calc(double*x1,double*x2)
    {
        double D=b*b-4*a*c;
        if (D>0)
        {
            *x1=(-b+sqrt(D))/(2*a);
            *x2=(-b-sqrt(D))/(2*a);
        }
        else if (D<0)
        {

        }
        else
        {
            *x1=*x2=-b/2*a;
        }
        return D;
    }

    void Input(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

    Quadclass()
    {
        this->a=0;
        this->b=0;
        this->c=0;
    }
    Quadclass(int a, int b, int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

int main()
{
    cout<<"Введите a\n";
    int a;
    cin>>a;
    cout<<"Введите b\n";
    int b;
    cin>>b;
    cout<<"Введите c\n";
    int c;
    cin>>c;
    Quadclass quad1(a,b,c);
    double x1,x2;
    if (quad1.calc(&x1,&x2)<0)
    {
        cout<<"вещественных корней нет";
    }
    else
    {
        cout<<x1<<" "<<x2;
    }
    cin>>c;
}