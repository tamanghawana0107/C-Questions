//Write a program to calculate perimeter and area of a rectangle.
#include<stdio.h>
int main()
{
	float l=0,b=0,area=0,perimeter=0;
	printf("enter length and breath");
	scanf("%f %f",&l,&b);
	perimeter=2*(l+b);
	area=l*b;
	printf("The perimeter is %f\n",perimeter);
	printf("\nThe area is %f",area);
	return 0;
	
}
