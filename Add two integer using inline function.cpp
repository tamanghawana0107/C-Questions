//WAP to add two integers and return the sum using inline function [2017]
#include<iostream>
using namespace std;
inline int sum(int p,int q)
{
	return(p+q);
}

int main()
{
	int a,b,c;
	cout<<"Enter the first integer : ";
	cin>>a;
	cout<<endl<<"Enter the second integer : ";
	cin>>b;
	c=sum(a,b);
	cout<<"The sum of the two integer are :"<<c<<endl;
	return 0;
}


