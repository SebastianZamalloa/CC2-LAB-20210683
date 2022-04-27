#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    time_t now = time(0);
    tm * time = localtime(&now);
    int hour = time->tm_hour;
    int minutes = time->tm_min;
    int minPlus;
    cout<<"Esta es la hora actual: "<<hour<<":"<<minutes<<endl;
    cout<<"Ingrese un cantidad de minutos para restarle a la hora actual: ",cin>>minPlus;
    minutes -= minPlus;
    if(minutes<0)
    {
        if(minutes<=-60)
            hour -=minutes%60;
        else
            hour--;
        minutes += 60;
    }
    cout<<"Esta seria la nueva hora: "<<hour<<":"<<minutes<<endl;

}