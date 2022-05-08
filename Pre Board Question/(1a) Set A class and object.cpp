/*WAP to create a class named Employee_Info with data member Emp_Id and Emp_Name.Create another class named 
Finance_Info from Employee_Info with data member Bas_Sal and Ot_Sal.Create an independent class Extra_allowances 
with data member Tray_All,House_All.Now,derive another class named Total_Info from Finance_Info and Extra_allowances 
with the data member Tot_Sal.Make necessary function for the above and show Gross Salary.*/
#include<iostream>
using namespace std;
class Employee_Info{
	protected:
		int Emp_Id;
		string Emp_name;
		public:
			void get_details(int o,string p)
			{
				Emp_Id=o;
				Emp_name=p;
			}
};
class Finance_Info : public Employee_Info{
	protected:
		int Bas_Sal;
		int Ot_Sal;
		public:
			void details(int r ,int s)
			{
				Bas_Sal=r;
				Ot_Sal=s;
			}
};
class Extra_Allowances{
	protected:
		int Tray_All;
		int House_All;
		public:
			void det(int t,int h)
			{
				Tray_All=t;
				House_All=h;
			}
};
class Total_info: public Finance_Info, public Extra_Allowances{
	public:
		int Tot_Sal;
		void grossSal()
		{	
			int pf;
			pf=Bas_Sal*0.11;
			Tot_Sal=Bas_Sal+Ot_Sal+House_All+Tray_All-pf;
		}
		void display()
		{
			cout<<"\nThe Id of the employee :"<<Emp_Id;
			cout<<"\nThe Name of the employee :"<<Emp_name;
			cout<<"\nThe Gross Salary of the employee :"<<Tot_Sal;
		}
}; 
int main()
{
	Total_info obj1;
	int id,bs,ots,trA,hoA;
	string n;
	cout<<"\nEnter the Id of the employee :";
	cin>>id;
	fflush(stdin);
	cout<<"\nEnter the Name of the employee :";
	getline(cin,n);
	fflush(stdin);
	obj1.get_details(id,n);
	cout<<"\nEnter the Basic Salary of the employee :";
	cin>>bs;
	fflush(stdin);
	cout<<"\nEnter the Outstanding Salary of the employee :";
	cin>>ots;
	fflush(stdin);
	obj1.details(bs,ots);
	cout<<"\nEnter the Tray Allowance of the employee :";
	cin>>trA;
	fflush(stdin);
	cout<<"\nEnter the House Allowance of the employee :";
	cin>>hoA;
	fflush(stdin);
	obj1.det(trA,hoA);
	obj1.grossSal();
	obj1.display();
	return 0;
}
