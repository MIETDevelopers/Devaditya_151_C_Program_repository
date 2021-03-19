//Author name: Devaditya sharma 
//creation date: 19-03-2021
// purpose:Sorting an array using insertion sort
#include <stdio.h>//Preprocessor directive to include input output function header file
//start of the main body function 
int main()
{
    int n, i, j, temp;//Declaring variables of integer data type
    int arr[64];//declaring 
    //This will determine the limit of values according to user input.
    printf("Enter number of elements\n");//printf function calling to print the elements
    scanf("%d", &n);//scanf functiobn calling to read the user input

    printf("Enter %d integers\n", n);//printf function calling to print the integers
    for (i = 0; i < n; i++)//start for loop
    {
        scanf("%d", &arr[i]);//scanf function calling to read the user input
    }
    for (i = 1 ; i <= n - 1; i++) //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])//using whilw loop
            {
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //This will give the output.
    printf("Sorted list in ascending order:\n");//printf function calling to print Sorted list in ascending order
    for (i = 0; i <= n - 1; i++)//using for loop
    {
        printf("%d\n", arr[i]);//printf function calling to print array 
    }
    return 0;//returning statement
}