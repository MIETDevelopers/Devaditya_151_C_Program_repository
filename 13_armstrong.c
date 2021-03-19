//Author name: Devaditya sharma 
//creation date: 17-03-2021
// purpose:Check no. is armstrong or not using while loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
int main() {
  int num, originalNum, remainder, result = 0;//Declaring variables of integer data type
  printf("Enter a three-digit integer: \n");//Printf function calling to print a three digit integer
  scanf("%d", &num);//It will scan the operater entered by user.
  originalNum = num;
//start of while loop
  while (originalNum != 0) {
     //Formula
     // remainder contains the last digit
    remainder = originalNum % 10;
        
    result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (result == num)//if statement
      printf("%d is an Armstrong number.", num);//printf function calling to print an armstrong number
  else//else statement
      printf("%d is not an Armstrong number.", num);//printf function calling to print not an armstrong number

  return 0;//return statement
}//End of main function body