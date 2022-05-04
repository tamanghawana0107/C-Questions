//WAP for the class to basic conversion........casting operator function
#include<iostream>
using namespace std;
class Time{
	int hrs,min;
	public:
		Time(int h,int m)
		{
			hrs=h;
			min=m;
		}
		operator int ()
		{
			return(hrs*60+min);
		}
		~Time()
		{
			cout<<"DESTRUCTOR CALLED ......."<<endl;
		}
};
int main()
{
	int a, b,duration;
	cout<<"Enter hr and min:"<<endl;
	cin>>a>>b;
	Time t1(a,b);
	duration=t1;
	cout<<endl<<"Total minutes are :"<<duration;
	duration =t1. operator int();
	cout<<"Total minutes are :"<<duration;
	return 0;
}
