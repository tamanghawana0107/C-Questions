//WAP to find the largest number of two class using friend function.
#include<iostream>
using namespace std;
class num2;
class num1{
	int a;
	public:
		void getDetails(int x)
		{
			a=x;
		}
		friend class num2;
};
class num2{
	int b;
	public: 
	void getDetails( int y)
	{
		b=y;
	}
	friend void largest();
};

int main
{
	num1 obj1;
	num2 obj2,obj3;
	int h,r;
	cout<<"Enter the first number:";
	cin>>h;
	cout<<"Enter the second number:";
	cin>>r;
	obj1.getDetails(h);
	obj2.getDetails(r);
	
	return 0;
}
