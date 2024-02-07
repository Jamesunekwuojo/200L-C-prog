// A  program to determine whether an individual is eligible to vote
#include <stdio.h>
int main(){
	int age;
	printf("Enter candidates age:");
	scanf("%d", &age);
	
	if (age>=18){
		printf("congrats you are eligible to vote");
		
	} else {
		printf("Sorry! you are under aged and not eligible to vote.");
	}
}