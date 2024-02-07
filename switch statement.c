// Dangling problem in C
// note the use of nested curly braces in if statement
// switch case - use or multiple condition just like our if else-if statement.
#include <stdio.h>
int main () {
	
	int num;
	printf("Enter value:");
	scanf("%d", &num);
	
	switch(num){
		case 10:
			printf("Num enterred is 10");
			break;
		case 50:
			printf("Num entered is %d");
				break;
				
		case 100:
			printf("number enterd is 100");
					
				break;
					
		default:
			printf("Number is not equal 10, 50 and 100");
		
		
	} 
	
	return 0;
}