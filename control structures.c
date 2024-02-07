// Control Structures - It specifies which statement comes next it specifies the order based on the condition
// Types: sequential, Decision,    Iteration
// Sequence structures
// Selection sructure: if sts, if else,(two operation for one condition) nestedsts,
 
// A program to admit student whoose age is up to 16yrs
#include <stdio.h>
int main () {
	int age =16;
	printf("Enter student's age:");
	scanf("%d", &age);
	
	if(age>16){
		printf("Offer admission to applicants");
		
	} else{
		printf("Sorry try again no addmission given, You are recommended to Jupeb program");
	}
}

