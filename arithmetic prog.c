// Program to perform aithmetic operation
#include <stdio.h>
int main (){
	int num1;
	int num2;
	int add, sub, mod, mult, div;
	printf("Input the value of num1: \n");
	scanf("%d ", &num1);
	printf("Input the value of num2: \n");
	scanf("%d", &num2);
	
	add  = num1 + num2;
	sub  = num1 - num2;
	mult = num1*num2;
	mod  = num1%num2;
	div  = num1/num2;
	
	printf("The sum of the number is %d \n", add);
	printf("The difference of the number is %d \n", sub);
	printf("The mult of the number is %d \n", mult);
	printf("The mode of the number is %d \n", mod );
	printf("The div of the number is %d \n", div );
	
	return 0;
	
	
	
}
