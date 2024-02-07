// Write a c program to find the maximum no between two no using functions 

#include <stdio.h>
#include "maxno.c"

int main (){
	int a;
	int b;
	printf("Enter the value for a:");
	scanf("%d", &a);
	
	printf("Enter value for b:");
	scanf("%d", &b);
	
	max_no(a,b);
	
}