//WAP to calculate the area of rectangle of using default arguments.
#include<iostream>
using namespace std;
int areaOfRectangle(int x)
{
	cout<<"The area of rectangle :"<<x<<endl;
}
int main()
{
	int length,breadth,height;
	int area;
	cout<<"Enter the length: ";
	cin>>length;
	cout<<"\nEnter the breadth: ";
	cin>>breadth;
	cout<<"\nEnter the height: ";
	cin>>height;
	area=length*breadth*height;
	areaOfRectangle(area);
	return 0;
}
