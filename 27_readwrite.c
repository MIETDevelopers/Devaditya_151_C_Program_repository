//Author Name: Devaditya sharma
//Creation Date: 21st March 2021
//Purpose: Program to read and write in a file
#include <stdio.h>//Preprocessor directive to include input output function header file
#include <stdlib.h>//Preprocessor directive to include standard library header file
int main(){//Start of the main body function 
   FILE *fptr;  //Declaring a file type variable.
   fptr = fopen("./txt.txt", "w"); //Opening a file in write mode
   if (fptr == NULL)//Condition to verify that file is opened or not
   {
      printf("Error! in opening a file ");//Printf function calling to print error
      exit(1);
   }
   fprintf(fptr, "hello world");//Writing in file
   fclose(fptr);
   return 0;//Return statement
}//End of the main body function