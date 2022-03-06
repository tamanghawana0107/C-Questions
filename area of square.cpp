//WAP to calculate the area of 
#include<iostream>
using namespace std;
class area
{
	int length;
	public :
		void set_value(int x)
		{
			length=x;
		}
		friend int square(area);
};
int square(area b)
{
	int a;
	a=b.length*b.length;
	cout<<"The area of the square is = "<<a<<endl;
	return 0;
}
int main()
{
	area obj1;
	int len;
	int s;
	cout<<"Enter the length of the square:: ";
	cin>>len;
	obj1.set_value(len);
	s=square(obj1);
	return 0;
}
