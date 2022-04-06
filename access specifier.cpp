//WAP to use access specifier
#include<iostream>
using namespace std;
class access_specfier{
	public:
		void details()
		{
			cout<<" using public access specifier"; 
		}
	
		void get()
		{
			cout<<"using protected access specifier";
		}
};
class specifier:public access_specfier
{
	public:
	
		void dtd()
		{
			cout<<"using derived class";
		
		}
};
int main()
{
	specifier x;
	x.dtd();
	x.details();

	return 0;
}
