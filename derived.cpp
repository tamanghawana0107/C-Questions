//WAP
#include<iostream>
using namespace std;
class vehicle{
	protected:
	int vehicleNumber;
	string model;
	int mileage,petrol;
	public:
		void get_details(int x,string name,int y)
		{
			vehicleNumber=x;
			model=name;
			petrol=y;
		}
		void mile(int c)
		{
			mileage=c*2;
		}
};
class details:public vehicle
{
	public:
		void detailsOfFord()
		{
			cout<<"\nThe details of the entered vehicle is ::"<<endl;
			cout<<"The name of the vehicle model:"<<model<<endl;
			cout<<"The vehicle number is :"<<vehicleNumber<<endl;
			cout<<"The mileage of vehicle :"<<mileage;		
		}
};
int main()
{
	details obj1;
	int a,b;
	string nm;
	cout<<"Enter the vehicle number :";
	cin>>a;
	cout<<"Enter the name of the vehicle :";
	cin>>nm;
	cout<<"Enter the petrol it uses :";
	cin>>b;
	obj1.get_details(a,nm,b);
	obj1.mile(b);
	obj1.detailsOfFord();
	return 0;
}
