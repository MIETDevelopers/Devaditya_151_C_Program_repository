//Author Name: Devaditya sharma
//Creation Date: 21st March 2021
//Purpose: To store the information of student marks using structures and find total marks of individual student
#include <stdio.h>//Preprocessor directive to include input output function header file
struct student{//Structure declaration
    char name[50];//Declaring an array of character data type
    int roll;//Declaring a variable of integer data type
    float marks;//Declaring a variable of float data type
}s;//Declaring structure variable
int main(){//Start of the main body function 
    printf("Enter information:\n");//Printf function calling to print information
    printf("Enter name: ");//Printf function calling to print name
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");//Printf function calling to print roll number
    scanf("%d", &s.roll);//Scanf function calling to read user input
    printf("Enter marks: ");//Printf function calling to print marks
    scanf("%f", &s.marks);//Scanf function calling to read user input
    printf("Displaying Information:\n");//Printf function calling to print displaying information
    printf("Name: ");//Printf function calling to print name
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);//Printf function calling to print roll number
    printf("Marks: %.1f\n", s.marks);
    return 0;//Return statement
}