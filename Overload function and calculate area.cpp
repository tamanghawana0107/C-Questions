/*WAP to overload a function named func_area(),which calculates and returns area of circle and rectangle.
Assume appropriate number and type of arguments and return type.*/
#include<iostream>
using namespace std;
int func_area(int x,int y)
{
	int s;
	s=x*y;
	return s;
}
float func_area(float r)
{
	float h,pie,hr;
	pie=3.14;
	hr=r*r;
	h=pie*hr;
	return h;
}
int main()
{
	float radius;
	int len,bre;
	cout<<"Enter the length of the rectangle :";
	cin>>len;
	cout<<"\nEnter the breadth of the rectangle :";
	cin>>bre;
	cout<<"\nThe area of the rectangle is "<<func_area(len,bre)<<endl;
	cout<<"\n\n*************FOR AREA OF CIRCLE****************";
	cout<<"\nEnter the radius of the circle :";
	cin>>radius;
	cout<<"\nThe area of the circle is "<<func_area(radius)<<endl;
	return 0;
	
}
