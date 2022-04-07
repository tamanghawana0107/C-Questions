//WAP using class to class using constructor.
#include<iostream>
using namespace std;
class Triangle {
	int base ,height;
	float area;
	public:
		Triangle(int b,int h)
		{
			base=b;
			height=h;
			area=0.5*base*height;
		}
		void print()
		{
			cout<<"\nBase :"<<base;
			cout<<"\nHeight :"<<height;
			cout<<"\nArea :"<<area;
		}
		int getBase()
		{
			return base;
		}
		int getHeight()
		{
			return height;
		}
};
class Rectangle{
	int width,length,area;
	public:
		void output()
		{
			cout<<"\nLength :"<<length;
			cout<<"\nWidth :"<<width;
			cout<<"\nArea :"<<area;
		}
		Rectangle(Triangle t)
		{
			
			width=t.getBase();
			length=t.getHeight();
			area=width*length;
		}
};
int main()
{
	Triangle t(10,20);
	Rectangle r=t;
	t.print();
	r.output();
	return 0;
}
