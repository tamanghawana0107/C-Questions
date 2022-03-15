//WAP to take 10 employees details and calculate the highest salary using class and object concept(Use friend function).
#include<iostream>
using namespace std;
class employee
{
	int employee_id;
	string name;
	int salary;
	public :
		void input(int x,char abc,int y)
		{
			employee_id=x;
			name=abc;
			salary=y;
		}
		void output();
		friend int calculate(employee);
};
int main()
{
	employee emp[10];
	int i,a,c;
	string b;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the details of the employees :"<<endl;
		cout<<"Enter the employee id of "<<i+1<<"employee :";
		cin>>emp[i].a;
		fflush(stdin);
		cout<<"Enter the employee name of "<<i+1<<"employee :";
		cin>>emp[i].b;
		fflush(stdin);
		cout<<"Enter the employee salary of "<<
	}
	
}
