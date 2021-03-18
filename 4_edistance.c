//Author name: Devaditya sharma
//Date:17-03-2021
//purpose:Find Euclidean distance between two points in a plane
#include<stdio.h> //Preprocessor directive to include input output function header file
#include<math.h>//Preprocessor directive to include maths header file
//start of the main body function 
int main()
{
	float x1,y1,x2,y2,d;//declaring variables of float data type
	printf("enter point1 (x1,y1)\n");//printf function calling to print the values of point x1,y1
	scanf("%f%f",&x1,&y1);//scanf function calling to read the values of point x1,y1
	printf("enter points2 (x2,y2)\n");//printf function calling to print the values of points x2,y2
	scanf("%f%f",&x2,&y2);//scanf function calling to read the values of point x2,y2
	d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//apply the distance formula
	printf("distance betweem these two points is %f \n" ,x1,x2,y1,y2,d);//printf funtion calling to print the distance between the two points 

	return 0;//retur statement 
}//end of main body functions
