//Author name: Devaditya sharma
//Creation date: 17-03-2021
//Purpose:Area of Circle, Square and Rectangle based on user choice
#include<stdio.h>// //Preprocessor directive to include input output function header file
//start of the main body function
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;//declaring of variables of float data type
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);//scanf function calling to read the user input
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//printf function calling to print the area of circle  
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));//printf function calling to print the perimeter of circle 
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//printf function calling to print the area of square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//printf function calling to print the perimeter of square 
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));//printf function calling to print the area of rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));//printf function calling to print the perimeter of rectangle 
	return 0;//return statement
}//end of the main function body
