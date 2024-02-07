// A C program to check if a number is positive number negatvenumber or is equal to zero
// if -- Elseif  statement - It is used  for multiple conditions
#include <stdio.h>
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d", &number);
	
	if (number>0){
		printf("%d is a positive number", number);
	} else if (number<0){
		printf("%d is a negative number", number);
		
	} else {
		printf("%d is equal to zero", number);
	}
	return 0;
	
} 