#include<iostream>
using namespace std;
class calculate{
	int breadth;
	int height;
	int length;
	
	public:
		void getDetails(int x,int y,int z)
		{
			breadth=x;
			height=y;
			length=z;
		}
		friend int volume(calculate);
		friend int area(calculate);
};
int area(calculate t)
{
	int s;
	s=t.breadth*t.length;
	cout<<"The area of the room is = "<<s;
	return 0;
}
int volume(calculate a)
{
	int b;
	b=a.breadth*a.height*a.length;
	cout<<"The volume of the room is = "<<b<<endl;
	return 0;
}
int main()
{
	calculate obj1;
	int value1,value2,value3,b,e;
	cout<<"Enter the value of breadth : ";
	cin>>value1;
	cout<<"Enter the value of height : ";
	cin>>value2;
	cout<<"Enter the value of length : ";
	cin>>value3;
	obj1.getDetails(value1,value2,value3);
	b=volume(obj1);
	e=area(obj1);
	return 0;
	
	
}
