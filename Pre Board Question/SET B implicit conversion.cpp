//WAP to write implicit type conversion
#include<iostream>
using namespace std;
int main()
{
	int num_int=26;
	double num_double;
	
	//Automatic conversion
	num_double=num_int;
	
	cout<<"The integer value is :"<<num_int;
	cout<<"\nThe double value is :"<<num_double;
	return 0;
}
