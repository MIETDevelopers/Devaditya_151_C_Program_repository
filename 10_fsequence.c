//Author Name: Devaditya sharma
//Creation Date: 18th March 2021
//Purpose: Fibonacci sequence using for loop
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;//Declaring variables of integer data type
    printf("Enter the number of terms: ");//Printf function calling to print number of terms
    scanf("%d", &n);//Scanf function calling to read user input
    printf("Fibonacci Series: ");//Printf function calling to print fibonacci series

    for (i = 1; i <= n; ++i) {//Start of for loop
        printf("%d, ", t1);//Printf function calling
        nextTerm = t1 + t2;//Formula for fibonacci series
        t1 = t2;//Assigning value of t2 to t1
        t2 = nextTerm;//Assigning value of nextTerm to t2
    }//End of for loop

    return 0;//Return statement
}//End of main function body