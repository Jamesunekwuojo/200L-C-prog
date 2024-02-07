//A simple program to print out multiplication table
#include <stdio.h>
int main(){
	int i, number, mult;
	printf("Enter a number:");
	scanf("%d", &number);
	while(i<=10){
		
		mult = number * i;
		printf("%d *%d =%d \n", number, i, (number*i));
//		printf("%d * %d = %d \n", number, i, mult);
		i++;
		
	}
	return 0;
}