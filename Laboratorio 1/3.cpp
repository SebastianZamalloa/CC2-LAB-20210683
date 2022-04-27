#include<iostream>
using namespace std;

int main()
{
    string hourEnter;
    int minPlus;
    cout<<"Ingrese la hora en formato HH:MM: ",cin>>hourEnter;
    while(hourEnter.length()>5 || hourEnter.length()<5 || hourEnter[2] != ':' || stoi(hourEnter.substr(0,2))>23 || stoi(hourEnter.substr(3,5))>59)
        cout<<"Ingrese una hora con el formato indicado\nIngrese la hora en formato HH:MM: ",cin>>hourEnter;
    int hourx = stoi(hourEnter.substr(0,2));
    int minutesx = stoi(hourEnter.substr(3,5));
    string timeZone = " AM";
    cout<<"Ingrese un cantidad de minutos para agregarle: ",cin>>minPlus;
    minutesx += minPlus;
    if(minutesx >= 60)
    {
        hourx += minutesx/60;
        minutesx -= 60*(minutesx/60);
    }
    if(hourx >= 12 && hourx<= 23)
        timeZone = " PM";
    if(hourx >=12)
        hourx = hourx%12;
    string houry(to_string(hourx));
    string minutesy(to_string(minutesx));
    if(minutesx<10)
        minutesy = "0"+minutesy;     
    string newHour = houry+":"+minutesy+timeZone;
    cout<<"Esta seria la nueva hora: "<<newHour;
    
}
