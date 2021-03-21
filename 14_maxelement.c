//Author name: Devaditya sharma
//Creation date:21-03-2021
//purpose: To find max element and index in array
#include<stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
int main(){
	int i;////Declaring variable of integer data type
	float arr[5];//Declaring of array of float data type

	printf("Please enter five numbers:\n ");//Printf function calling to print the five number

	for (i = 0; i < 5; ++i)//start of for loop
	{
    scanf("%f", &arr[i]);//This will scan (read) the number entered by user.
	}

		for (i = 1; i < 5; ++i)//for loop
		{
    	if (arr[0] < arr[i])//if statement
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);//printf function calling to print the largest element

	return 0;//returning statement
}//End of main function body