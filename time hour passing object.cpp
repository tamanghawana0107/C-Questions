//WAP to add two times in hour and minute illustrating passing object as function arguments.
#include<iostream>
using namespace std;
class time{
	int hour;
	int minute;
	public:
		void getDetails(int x,int y)
		{
			hour=x;
			minute=y;
		}
		time display()
		{
			cout<<"The new time is :"<<endl;
			cout<<"Hour ="<<hour<<endl;
			cout<<"Minute ="<<minute<<endl;
		}
		void add(time,time);
};
void time :: add(time j ,time k)
	{
		
		hour=j.hour+k.hour;
		minute=j.minute+k.minute;
		
	}
int main()
{
	time obj2,obj3,obj4;
	int a,b,c,d;
	cout<<"Enter the hour (1)=";
	cin>>a;
	cout<<"Enter the minute(1)=";
	cin>>b;
	cout<<"Enter the hour (2)=";
	cin>>c;
	cout<<"Enter the minute(2)=";
	cin>>d;
	obj2.getDetails(a,b);
	obj3.getDetails(c,d);
	obj4.add(obj2,obj3);
	obj4.display();
	return 0;
}

