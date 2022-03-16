//WAP to use inline function in class
#include<iostream>
using namespace std;
class sum{
	int a;
	int b;
	
	public:
		void getDetails(int x,int y)
		{
			a=x;
			b=y;
		}
		inline void add(int w,int e )
		{
			int g;
			g=w+e;
			cout<<"The sum of the two given number is "<<g<<endl;
		}
};
int main()
{
	sum obj1;
	int h,r,p;
	cout<<"Enter the first number :";
	cin>>h;
	cout<<"Enter the second number:";
	cin>>r;
	obj1.getDetails(h,r);
	obj1.add(h,r);
	return 0;
}

