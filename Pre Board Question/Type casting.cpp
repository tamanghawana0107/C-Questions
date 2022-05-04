//Type casting (Combination of C-style casting & Function style type casting
#include<iostream>
using namespace std;
int main()
{
	int num_int=56;
	double num_double;
	
	//C style type casting;
	num_double=(double) num_int;
	
	cout<<"The integer value is:"<<num_int;
	cout<<"\nThe double value is :"<<num_double;
	
	//function style type casting
	num_double=double (num_int);
	cout<<"\nThe integer value is :"<<num_int;
	cout<<"\nThe double value is :"<<num_double;
	return 0;
}
