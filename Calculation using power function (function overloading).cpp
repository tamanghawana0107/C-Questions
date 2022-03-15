/*WAP to overload a function named power which calculates a^b or (a+b)^c if two or 
three arguments are passed respectively.*/
#include<iostream>
#include<math.h>
using namespace std;
int calcu(int x,int y)
{
	int result;
	result=pow(x,y);
	return result;
}
int calcu (int x,int y,int z)
{
	int hr,r;
	r=x+y;
	hr=pow(r,z);
	return hr;
}
int main()
{
	int a,b,c;
	cout<<"Enter the value of a :";
	cin>>a;
	cout<<"\nEnter the value of b :";
	cin>>b;
	cout<<"\nEnter the value of c :";
	cin>>c;
	cout<<"\nThe calculation of a^b is "<<calcu(a,b)<<endl;
	cout<<"\nThe calculation of (a+b)^c is "<<calcu(a,b,c)<<endl;
}
