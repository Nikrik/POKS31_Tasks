#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h>// time
using namespace std;

class Task7
{
public:
int p;//вер-сть поподания
    Task7(int p)
    {
        this->p=p;
    }
    Task7()
    {

    }
    void input(int p)
    {
        this->p=p;
    }
    double sred()
    {
        
    }
    int Shot()
    {
        int i=0;
        srand(time(0));
        do
        {
            i++;
            //cout<<"shot #"<<i<<"..."<<" ";//debug
            int r=rand()%100+1;
            if (i==100001)
            {
                //cout<<"out of ammo"<<endl;//debug
                return 0;
            }
            if (r<=p)
            {
                //cout<<"successfully"<<endl;//debug
                return i;
            }
            //cout<<"fail"<<endl;//debug
        } while (true);
    }

    ~Task7()
    {

    }
};

int main()
{
    Task7 rar;
    cout<<"Введите вероятность поподания от 0 до 100\n";
    int c;
    cin>>c;
    rar.input(c);
    cout<<"Сделано выстрелов: "<<rar.Shot();
    string s;
    cin>>s;
}