// C program to calculate Simple Interest
// SI = (PRT)/100
#include <stdio.h>
int main (){
	int time, rate, P;
	float SI;
	printf("Input value for time: ");
	scanf("%d", &time);
	printf("Input value for rate:");
	scanf("%d", &rate);
	printf("Input value for p:");
	scanf("%d", &P);
	
	SI = (P * rate * time) /100;
	printf("Simple Interst is equal to: %.2f", SI);
	return 0;
	
	
	
	
	
}
