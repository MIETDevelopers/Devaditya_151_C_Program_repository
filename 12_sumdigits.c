//Author Name: Devaditya sharma
//Creation Date: 17th March 2021
//Purpose: Sum of all digits of a number using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of the main function body
int main()
{
  int Number, Reminder, Sum=0;//Declaring variables of integer data type
  printf("Please Enter any number\n");//Printf function calling to print number
  scanf("%d", &Number);//Scanf function calling to read user input

  while(Number > 0)//Start of while loop.
  {
     Reminder = Number % 10;
     Sum = Sum+Reminder;
     Number = Number / 10;
  }//End of while loop
  printf("Sum of the digits of Given Number = %d\n", Sum);//Printf function to print sum of digits of given number
  return 0;//Return statement 
}//End of the main function body