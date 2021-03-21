//Author name: Devaditya sharma
//Creation date: 21-03-2021
//purpose: Write a C program to create Simple Calculator using switch case and function for every operation
#include<stdio.h>//Preprocessor directive to include input output function header file
//start of the main body function 
int main(){
    char operator;//declaring variable of char data type
    double a, b;//declaring variable of double data type
    printf("Enter an operator (+, -, *, /):"); //It will print the operater to be entered by user.
    scanf("%c", &operator); //It will scan the operater entered by user.
    printf("Enter two operands:");//printf function calling to print two operstors
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user.
    switch(operator) //Switch case is used to perfom the calculation case that is scanned (in line 6) based on user input.
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");  //Default
    }
    return 0;//return statement
}//end of main function body