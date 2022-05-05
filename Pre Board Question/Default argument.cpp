//WAP for the default argument...
#include<iostream>
using namespace std;
int add(int a=0,int b=10,int c=20);
int main()
{
	cout<<add(1)<<endl;
	cout<<add(1,2)<<endl;
	cout<<add(1,2,3)<<endl;
	return 0;
}
int add(int a,int b,int c)
{
	int z;
	z=a+b+c;
	return z;
}
