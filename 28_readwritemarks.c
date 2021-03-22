//Author name : Devaditya sharma
//creation date: 22-03-2021
//Purpose: Program for reading and writing the student marks data to files 
#include <stdio.h>//Preprocessor directive to include input output function header file 
#include <stdlib.h>//Preprocessor directive to include standard library function header file
struct s{
	//Creating a user defined data type using structures.
	char name[50];//Declaring an array of character data type
	int RollNo;//Declaring a variable of integer data type
	int Marks;//Declaring a variable of integer data type
};
int main(){//Start of the main body function
	struct s a[10],b[10];
	FILE *fptr;
	int i;//Declaring variable of integer data type
	fptr=fopen("E:\\Softwares\\C_Programs\\Devaditya_151_C_Programs_Repository\\031_ReadWriteMarks.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i){//Start of for loop
		fflush(stdin);
		//Scanning the entered Values.
		printf("Enter Name: ");//Printf function calling to print name
		gets(a[i].name);//Read string
		printf("Enter Roll Number: ");//Printf function calling to print roll number
		scanf("%d",&a[i].RollNo);//Scanf function to read user input
		printf("Enter Marks: ");//Printf function calling to print marks
		scanf("%d",&a[i].Marks);//Scanf function to read user input
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("E:\\Softwares\\C_Programs\\Devaditya_151_C_Programs_Repository\\031_ReadWriteMarks.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");//Printf function calling to print entered details
	for (i=0;i<1;++i){//Start of for loop
		printf("Name: %s\n	Roll Number: %d\n	Marks: %d",b[i].name,b[i].RollNo,b[i].Marks);//Printf function calling to print name,rollno,marks 
	}
	fclose(fptr);//Closing the program.
}//End of the main body function