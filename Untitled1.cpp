//WAP to convert dollar in nepali rupees using friend function and class.....
#include<iostream>
using namespace std;
class convert
{
	int a,b;
	public:
	void get_dollar()
	{
		cout<<"Enter the dollar to be converted :: ";
		cin>>a;
	}
	friend int conversion (int c);
	
};
 int conversion(int c)
 {
 	return int(c.a*119);
 }
int main()
{
	int s;
	s.get_dollar();
	cout<<"The converted currency is = "<<conversion(s);
	return 0;
}
