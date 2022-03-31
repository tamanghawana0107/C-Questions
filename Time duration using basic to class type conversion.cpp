//WAP to basic to class conversion...
#include<iostream>
using namespace std;
class timeCon{
	int hr,min;
	public:
		void display();
	 timeCon(int);
};
 void timeCon::display()
{
	cout<<"The converted time is :-"<<endl<<endl;
	cout<<hr<<":"<<min<<endl;
}
 timeCon::timeCon(int x)
{
	hr=x/60;
	min=x%60;
	
}
int main()
{

	int minutes;
	cout<<"Enter the minutes to be converted :";
	cin>>minutes;
	timeCon obj=minutes;
	obj.display();
}
