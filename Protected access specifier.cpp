//WAP for access specifier.
#include<iostream>
using namespace std;
class Rectangle
{
	protected:
	int len,bre,area;
	public:
		void get_Details(int x,int y)
		{
			len=x;
			bre=y;
			area=len*bre;
		}
		void display()
		{
			cout<<"\nAREA of figure :"<<area;
		}
	
};
class square:public Rectangle
{
	public:
		void display_square()
		{
			cout<<"\nAREA of square :"<<len*len;
		}
};
int main()
{
	
	square r;
	r.get_Details(20,10);
	r.display();
	r.display_square();
	return 0;
}
