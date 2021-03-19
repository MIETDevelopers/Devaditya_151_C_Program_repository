//Author name: Devaditya sharma
//Creation date: 19-03-2021
//purpose:Maximum of n numbers using for loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//start of the main function body
int main()
{
  int i,num,n,large=0;;//Declaring variables of integer data type

  //It will set the maximum number (Limit) of values to be entered by user based on their choice.
  printf("How many numbers: ");//printf function calling to print numbers
  scanf("%d",&n); //scanf function calling to read  the user input
  
  for(i=0; i<n; i++)//start of for loap
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    printf("\nEnter number %d: ",i+1);//printf function calling to print number
    scanf("%d",&num);//Scanf function calling to read the user input
    if(num>large)//if case
    large=num;
  }

  printf("\nThe Largest number is %d",large); //It will give the largest number as the output.

  return 0;//Return statement
}//End of main function body