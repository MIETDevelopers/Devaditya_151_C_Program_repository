//Author name: Devaditya sharma
//Creation date: 17-23-2021
//purpose:Area and Perimeter of Circle, Square and Rectangle
#include<stdio.h>//Preprocessor directive to include input output functions header file
int main(){//Start of main body function
	float raduisOfCircle=3;//Declaring variable of float data type
	float sideOfSquare=2;//Declaring variable of float data type
	float lengthOfRectangle=4;//Declaring variable of float data type
	float breadthOfRectangle=2;//Declaring variable of float data type
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));//Printf function calling to print area of circle 
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));//Printf function calling to print perimeter of cirle
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));//Printf function calling to print area of square 
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));//Printf function calling to print perimeter of square 
	printf("\nArea of Rectangle: %f",(lengthOfRectangle*breadthOfRectangle));//Printf function calling to print area of rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(lengthOfRectangle+breadthOfRectangle)));//Printf function calling to print perimeter of circle 
 return 0;//Return statement
}//End of the main body function