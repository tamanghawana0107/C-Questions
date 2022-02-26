/*WAP to add two objects of a class using friend function the class consist of hour and minute as 
its data member, input(),sum() and output() as its member function [2017 1b] */
#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    public:
    void input(int x,int y)
    {
        hour=x;
        minute=y;
    }
    friend int sum(time,time);
   
};
int sum(time a,time b)
{
    int c,d;
    c=a.hour+b.hour;
    d=a.minute+b.minute;
    cout<<endl<<"The sum of hour is = "<<c<<endl<<endl;
    cout<<"The sum of minute is = "<<d<<endl<<endl; 
    return 0;    
}

int main()
{
    time obj1 ,obj2;
    int value1,value2,value3,value4,t;
    cout<<"Enter the first input for hour =";
    cin>>value1;
    cout<<endl<<"Enter the first input for minute  =";
    cin>>value2;
    cout<<endl<<"Enter the second input for hour  =";
    cin>>value3;
    cout<<endl<<"Enter the second input for minute  =";
    cin>>value4;
    obj1.input(value1,value2);
    obj2.input(value3,value4);
    t=sum(obj1,obj2);
    
    return 0;
}
