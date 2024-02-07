// Program to read and display: fullname, DOB, Nationality, State of Origin,
// phone Number, Gender, 
#include <stdio.h>
#include <stdlib.h>
int main (){
	char fullname[15];
	char DOB[20];
	char SO[15];
	char PhoneN[11];
	char GD[10];
	char MatricN[15];
	char Dept [15];
	char Prog[20];
	
	// Using Fget function to display
	
	printf("Enter Your Name: ", fullname);
	fgets(fullname, sizeof(fullname), stdin);
	
	
	
	printf("Enter Date Of Birth : ");
	fgets(DOB, sizeof(DOB), stdin);
	
	
	printf("Enter State Of Origin : " );
	fgets(SO, sizeof(SO), stdin);
	
	
	printf("Enter  Phone No : ");
	fgets(PhoneN, sizeof(PhoneN), stdin);
	
	
	printf("Enter Gender : ");
	fgets(GD, sizeof(GD), stdin);
	
	
	printf("Enter Matric No : ");
	fgets(MatricN, sizeof(MatricN), stdin);
	
	
	printf("Enter  Department : ");
	fgets(Dept, sizeof(Dept), stdin);
	
	
	printf("Enter  programme : ",Prog);
	fgets(Prog, sizeof(Prog), stdin);
	
	system("cls");
	
	// To diaplay
	printf("<--PERSONAL INFORMATION--> \n");
	printf("Fullname : %s", fullname);
	printf("Date of Birth:  %s", DOB);
	printf("State Of Origin:  %s", SO);
	printf("Phone No: is %s", PhoneN);
	printf("Gender:  %s", GD);
	printf("Matric No:  %s", MatricN);
	printf("Department:  %s", Dept);
	printf("Programme:  %s", Prog);
	
	
	
	
	
	
	
	

	
}