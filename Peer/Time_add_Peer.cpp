//Progrm to add time

#include<iostream>
#include<conio.h>
using namespace std;

class time
{
    int hr, min, sec;

    public:

    time()
    {
        cout<<"\nEnter hours, minutes and seconds respectively: ";
        cin>>hr>>min>>sec;
    }

    time operator+(time t)
    {
        sec=sec+t.sec;
        min=min+t.min;
        hr=hr+t.hr;

        if(sec>=60)
        {
            min+=sec/60;
            sec%=60;
        }

        if(min>=60)
        {
            hr+=min/60;
            min%=60;
        }

        return *this;
    }

    void display()
    {
        cout<<"\nAdded time: "<<hr<<" Hrs "<<min<<" Mins "<<sec<<" Secs ";
    }
};

int main()
{
    time t1, t2;

    t1=t1+t2;
    t1.display();

    _getch();
    return 0;
}