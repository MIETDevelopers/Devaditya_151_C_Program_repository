//Author:Devaditya sharma
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a");
	scanf("%d",&a);
	printf("Enter b");
	scanf("%d",&b);
	printf("Enter c");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
			printf("a is a greater number");
		else
			printf("c is a greater number");
	}
	else
	{
		if(b>c)
			printf("b is a greater number");
		else
			printf("c is greater number");
	}
	return 0; 
}