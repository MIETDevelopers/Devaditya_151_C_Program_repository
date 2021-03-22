//Author name: Devaditya sharma
//cretion date: 21-03-2021
//purpose:Factorial using recursion 			
#include<stdio.h>//Preprocessor directive to include input output functions header file
	long int multiplyNumbers(int n);//Function declaration
	int main(){//Start of the main function body
    	int n;//Declaring variable of integer data type
    	printf("Enter a positive integer: ");//Printf function calling to print positive integer 
    	scanf("%d",&n);//Scanf function calling to read user input
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));//Printf function calling to print factorial
    	return 0;//Return statement
	}

	long int multiplyNumbers(int n){//Function definition
    	if (n>=1)//If-else statement
        	return n*multiplyNumbers(n-1);//Return statement
    	else
        	return 1;//Return statement
}