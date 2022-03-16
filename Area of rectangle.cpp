//WAP to calculate the area of rectangle of using default arguments.
#include<iostream>
using namespace std;
int areaOfRectangle(int x)
{
	cout<<"The area of rectangle :"<<x<<endl;
}
int main()
{
	int length,breadth,area;
	length=5;
	breadth=5;
	area=length*breadth;
	areaOfRectangle(area);
	return 0;
}
