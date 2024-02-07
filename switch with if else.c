#include <stdio.h>
int main () {
	
	int num;
	printf("Enter value:");
	scanf("%d", &num);
	
	switch(num>0){
		case 1:
			printf("num is positive");
			break;
		case 0:
			if(num<0){
				printf("Num entered is negative");	
			} 
			
			else {
				printf("Num entered is  zero");	
			}
				

	} 
	
	return 0;
}