//WAP to take 10 employees details and calculate the highest salary using class and object concept(Use friend function).
#include<iostream>
using namespace std;
class employee
{
	int employee_id;
	string name[20];
	int salary;
	public :
		void input(int x,string abc,int y)
		{
			employee_id=x;
			name[20]=abc;
			salary=y;
		}
		employee calculate (employee p[])
		{
			employee obj,temp;
			int i,j;
		for(i=0;i<3;i++)
		{
			for(j=j+1;j<3;j++)
			{
				if(p[i].salary<p[j].salary)
				{
					temp=p[i];
					p[j]=p[i];
					p[i]=temp;
				}
			}
		}
	obj=p[0];
	return obj;
	}
	friend void output(employee);
};

void output(employee details)
{
	cout<<"The details of the employee with highest salary is given below :"<<endl<<endl;
	cout<<"ID :"<<details.employee_id;
	cout<<"Name :"<<details.name;
	cout<<"Salary :"<<details.salary;
}

int main()
{
	employee emp[3];
	employee d;
	int i,a,c;
	string b;
	for(i=0;i<3;i++)
	{
		cout<<"Enter the details of the employees :"<<endl<<endl;
		cout<<"Enter the employee id of "<<i+1<<" employee :";
		cin>>a;
		fflush(stdin);
		cout<<endl<<"Enter the employee name of "<<i+1<<" employee :";
		cin>>b;
		fflush(stdin);
		cout<<endl<<"Enter the employee salary of "<<i+1<<" employee :";
		cin>>c;
		cout<<endl<<endl;
		fflush(stdin);	
		emp[i].input(a,b,c);
	}
	employee calculate(employee[]);
	output(d);
	return 0;
	
}
