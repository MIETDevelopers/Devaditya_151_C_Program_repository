//Author name : Devaditya sharma
//Creation Date: 21th March 2021
//Purpose: A C Program to swap two numbers using call by reference.              
#include <stdio.h>//Preprocessor directive to include input output function header file
void swap(int*, int*);//Function declaration
int main(){//Start of the main body function
   int x, y;//Declaring variables of integer data type
   printf("Enter the value of x and y\n");//Printf function calling to print values of x and y
   scanf("%d%d",&x,&y);//Scanf function calling to read user input
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);//Printf function calling to print values before swapping
   swap(&x, &y);//Swap function calling 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);//Printf function calling to print values after swapping
   return 0;//Return statement
}//End of the main function body
void swap(int *a, int *b){//Swap function definition
   int temp;//Declaring variable of integer data type
   // Here swapping occurs.
   temp = *b;//Value of b is assigned to temp variable
   *b = *a;//Value of a is assigned to b variable
   *a = temp;//Value of temp is assigned to a variable   
}