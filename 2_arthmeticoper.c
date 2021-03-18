//Author Name: Devaditya sharma
//Creation Date: 17th March 2021
//Purpose: Arithmetic operations using addition, subtraction, multiplication and remainder operator
#include<stdio.h>//Preprocessive directive to include input output functions header file
//Start of the main body function
int main(){
    char operator;//Declaring variable of character data type 
    double a, b;//Declaring variables of double data type
    printf("Enter an operator (+, -, *, /):");//Printf function calling to print an operator
    scanf("%c", &operator);//Scanf function calling to read user input
    printf("Enter two operands:");//Printf function calling to print two operands
    scanf("%lf %lf",&a, &b);//Scanf function calling to read user input
    switch(operator)//Start of Switch case
    {
        case '+'://Case 1
            printf("%.lf + %.lf = %.lf",a, b, a+b);//Printf function calling to print addition of two numbers
            break;//Break statement

        case '-'://Case 2
            printf("%.lf - %.lf = %.lf",a, b, a-b);//Printf function calling to print subtraction of two numbers
            break;//Break statement

        case '*'://Case 3
            printf("%.lf * %.lf = %.lf",a, b, a*b);//Printf function calling to print multiplication of two numbers
            break;//Break statement

        case '/'://Case 4
            printf("%.lf / %.lf = %.lf",a, b, a/b);//Printf function calling to print division of two numbers
            break;//Break statement
    printf("Error encountered by the input values");//Printf function calling to print error  
    }
    return 0;//Return statement
}//End of the main function body