//WAP for Basic to Class type conversion using operator overloading...
#include<iostream>
using namespace std;
class Time{
	int hrs,min;
	public:
		void display();
		void operator =(int);
};

void Time::display()
{
	cout<<hrs<<"hr "<<":"<<min<<" min"<<endl;
	
}
void Time::operator =(int t)
{
	hrs=t/60;
	min=t%60;
}
int main()
{
	Time t1;
	int duration;
	cout<<"Enter the duration :"<<endl;
	cin>>duration;
	cout<<"\nBefore the conversion :"<<endl;
	t1.display();
	t1=duration;
	t1.operator =(duration);
	cout<<"\nAfter the conversion :"<<endl;
	t1.display();
	return 0;
}
