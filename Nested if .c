// Nested if statement (An if ststement emmbedded into another if statement, for the embedded if to be true the first if statement must be true)
// use to check multiple statement 
// check if a num 100  and check wether it's even or odd

#include <stdio.h>
int main(){
	int number;
	printf("Enter number:");
	scanf("%d", &number);
	
	if(number<100){
		printf("Number is less than hundred");
		
		if(number%2==0)
		printf("number is even");
		
		if(number/3)
		printf("%d is divisible by 3");
		
		
		else
		
		printf("%d is odd", number);
		
	}
	
	else
	printf("%d is equal to or greater than 100", number);
	
	return 0;
	
}