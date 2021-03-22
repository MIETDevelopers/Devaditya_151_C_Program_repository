//Author Name: Devaditya sharma
//Creation Date: 21st March 2021
//Purpose: To store information of a student using union
#include <stdio.h>//Preprocessor directive to include input output function header file
#include <string.h>//Preprocessor directive to include string header file
union student{//Union declaration
  char name[20];//Declaring an array of character data type
  char subject[20];//Declaring an array of character data type
  float percentage;//Declaring a variable of float data type
};
int main(){//Start of the main body function
  union student record1;//Variable declaration 
  union student record2;//Variable declaration
   
  strcpy(record1.name, "Shubham");
  strcpy(record1.subject, "Atul");
  record1.percentage = 86.50;
 
  printf("Union record1 values example\n");//Printf function calling to print union record1 values
  printf(" Name       : %s \n", record1.name);//Printf function calling to print name of record1
  printf(" Subject    : %s \n", record1.subject);//Printf function calling to print subject of record1
  printf(" Percentage : %f \n\n", record1.percentage);//Printf function calling to print percentage of record1
 
  printf("Union record2 values example\n");//Printf function calling to print union record2 values
  strcpy(record2.name, "Atul");
  printf(" Name       : %s \n", record2.name);//Printf function calling to print name of record2
 
  strcpy(record2.subject, "Physics");
  printf(" Subject    : %s \n", record2.subject);//Printf function calling to print subject of record2
 
  record2.percentage = 99.50;
  printf(" Percentage : %f \n", record2.percentage);//Printf function calling to print percentage of record2
  return 0;//Return statement
}