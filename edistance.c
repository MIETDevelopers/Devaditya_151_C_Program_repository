#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,d;
	printf("enter point1 (x1,y1)\n");
	scanf("%f%f",&x1,&y1);
	printf("enter points2 (x2,y2)\n");
	scanf("%f%f",&x2,&y2);
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("distance betweem these two points is %f \n" ,x1,x2,y1,y2,d);
	return 0;
}