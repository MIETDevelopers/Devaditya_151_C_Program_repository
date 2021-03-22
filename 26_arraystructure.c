//Author Name: Devaditya sharma
//Creation Date: 21st March 2021
//Purpose: Array of structures for student marks for each student and passing  it to function for various operations
#include <stdio.h>//Preprocessor directive to include standard input output function header file 
#include <string.h>//Preprocessor directive to include string header file
struct student{//Structure declaration
int id;//Declaring a variable of integer data type
char name[30];//Declaring an array of character data type
float percentage;//Declaring a variable of float data type
}; 
int main(){//Start of the main body
     int i;//Declaring variable of integer data type
     struct student record[3];
 
     // 1st student's record
     record[0].id=1;
     strcpy(record[0].name, "Raju");
     record[0].percentage = 99.0;
 
     // 2nd student's record         
     record[1].id=2;
     strcpy(record[1].name, "Bheem");
     record[1].percentage = 99.1;
 
     // 3rd student's record
     record[2].id=3;
     strcpy(record[2].name, "Kavya");
     record[2].percentage = 99.2;
 
     for(i=0; i<3; i++)
     {//Start of for loop
         printf(" Records of STUDENT : %d \n", i+1);
         printf(" Id is: %d \n", record[i].id);
         printf(" Name is: %s \n", record[i].name);
         printf(" Percentage is: %f\n\n",record[i].percentage);
     }//End of for loop
     return 0;//Return statement
}