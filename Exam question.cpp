//wap first term exam ques 
#include<iostream>
using namespace std;
class Y;
class X{
	public:
		int a;
		friend class Y;
};
class Y{
	public:
		int b;
		friend void largest(X,Y);
};
void largest (X p,Y q)
{
	if(p.a>q.b)
	{
		cout<<"The largest number is"<<p.a<<endl;
	}
	else
	{
		cout<<"The largest number is"<<q.b<<endl;
	}
}
int main()
{
	X obj;
	Y obj1;
	cout<<"Enter the first integer:";
	cin>>obj.a;
	cout<<"Enter the second integer:";
	cin>>obj1.b;
	largest(obj,obj1);
	return 0;
}
