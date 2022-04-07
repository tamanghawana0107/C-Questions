//wap to find greatest number among 10 numbers
#include<stdio.h>
int main()
{
	int i=0,n=0,great=0;
	for(i=1;i<=5;i++)
	{
		printf("Enter the number:");
		scanf("%d",&n);
		if(n>great){
			great=n;
		}
	}
	printf("Greatest=%d",great);
	return 0;
}
