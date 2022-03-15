//WAP to demonstrate passing objects by value to a member function of the same class.
#include<iostream>
using namespace std;
class weight{
	int kilogram;
	int gram;
	public:
		void getData();
		void putData();
		void sum_weight(weight,weight);
};
void weight :: getData()
{
	cout<<"\n Kilogram : ";
	cin>>kilogram;
	cout<<"\n Grams : ";
	cin>>gram;
}
void weight :: putData()
{
	cout<<kilogram<<"kgs and "<<gram<<"gram \n";
}
void weight :: sum_weight(weight w1,weight w2)
{
	gram=w1.gram+w2.gram;
	kilogram =gram/1000;
	gram =gram%1000;
	kilogram +=w1.kilogram+w2.kilogram;
}
int main()
{
	weight w1,w2,w3;
	cout<<"Enter weight in kilograms and grams \n";
	cout<<"\n Enter the weight #1 :";
	w1.getData();
	cout<<"\nEnter weight #2 :";
	w2.getData();
	w3.sum_weight(w1,w2);
	cout<<"\n Weight #1 = ";
	w1.putData();
	cout<<"Total weight = ";
	w3.putData();
	return 0;
}
