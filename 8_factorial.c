//Author Name: Devaditya sharma
//Creation Date: 17 March 2021
//Purpose: To find the Factorial of a Number using for loop 
#include<stdio.h>//Preprocessor directive to include input output function header file
//Start of the main body
int main(){
	int n,i,f=1;//Declaring variables of integer data type
	printf("Enter a Number : ");//Printf function calling to print a Number
	scanf("%d",&n);//Scanf function calling to read user input
	for (i=1; i<=n; i++)//Start of for loop
	{
		f=f*i;//factorial formula
	}
	printf("%d",f);//Printf function calling to print factorial
	return 0;//Return statement
}//End of the main function body