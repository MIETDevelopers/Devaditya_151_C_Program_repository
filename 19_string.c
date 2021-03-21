//Author name: Devaditya sharma
//creation date: 21-03-2021
//purpose:To demonstrate the use of various string operations  
#include <stdio.h>//Preprocessive directive to include input output functions header file
void displayString(char str[]);//string declaration

int main()//start of main function body
{
    char str[50];//declare string of char datatype
    printf("Enter String: \n");//print the string
    fgets(str, sizeof(str), stdin);  //This will read the user input.           
    displayString(str);     // Passing string to a function.    
    return 0;//returning statment
}
void displayString(char str[])//string defination
{
	//This will give output.
    printf("String Output: ");//print the string output
    puts(str);//print string
}