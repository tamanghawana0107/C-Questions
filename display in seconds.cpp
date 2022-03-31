//WAP where user enters hours minutes and seconds and the output is displayed in seconds.
#include<iostream>
using namespace std;
class timeCon{
	int hr,min,sec,seconds;
	public:
		void get_details(int x,int y,int z)
		{
			hr=x;
			min=y;
			sec=z;
		}
		void display()
		{
			cout<<"The entered time in seconds is :-";
			cout<<g;
		}
		int  calculate()
		{
			int seconds, seconds1,seconds2;
			seconds1=hr*3600;
			seconds2=min*60;
			seconds=sec+seconds1+seconds2;
			return seconds;
		}
};

int main()
{
	timeCon obj;
	int a,b,c;
	cout<<"Enter the hour :";
	cin>>a;
	cout<<"\n Enter the minutes :";
	cin>>b;
	cout<<"\n Enter the seconds :";
	cin>>c;
	obj.get_details(a,b,c);
	obj.calculate();
	obj.display();
	return 0;
}
