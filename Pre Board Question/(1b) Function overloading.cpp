//Discuss function overloading with example
#include<iostream>
using namespace std;
int are(int b,int h)
{
	int recArea;
	recArea=b*h;
	return recArea;
}
int are(int l)
{
	int squareArea;
	squareArea=l*l;
	return squareArea;
}
double are(double  r)
{

	double circleArea,radius;
	radius=r*r;
	circleArea=3.14*radius;
	return circleArea;
}
int main()
{
	cout<<"\nArea of the Rectangle :"<<are(5,4);
	cout<<"\nArea of the Square :"<<are(5);
	cout<<"\nArea of the Circle :"<<are(4.4);
	return 0;
}
