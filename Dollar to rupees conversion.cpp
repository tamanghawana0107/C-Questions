//WAP to convert dollar into rupees...
#include<iostream>
using namespace std;
class currConvert
{
	int dollar;
	static int rate;
	public:
		void set_value(int x)
		{
			dollar=x;
		}
		friend int convert(currConvert);
};
int currConvert::rate=119;
	int convert(currConvert x)
	{
	 int a;
	 a=x.dollar*x.rate;
	 cout<<"The converted currency is = "<<a<<endl;
	 return 0;
	}
int main()
{
	currConvert obj1;
	int value ;
	int t;
	cout<<"Enter dollar you want to convert = ";
	cin>>value;
	obj1.set_value(value);
	t=convert(obj1);
	return 0;
	
}
	

