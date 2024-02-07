#include <stdio.h>
#include "Div no.c"
int addTwonums(int a, int b);//prototypes
int diffTwonums(int a, int b);
int multTwonums(int a, int b);

//int DivTwonums(int a, int b);
int ModTwonums(int a, int b);

int main(){
	int a, b;
	printf("Enter first num:");
	scanf("%d", &a);
	
	printf("Enter second num:");
	scanf("%d", &b);
	
	int sum = addTwonums(a,b);
	printf("Sum of  %d and %d is %d \n", a, b, sum);
	
	int Diff = diffTwonums( a, b);
	printf("Difference of %d from %d is %d \n", a, b, Diff );
	
	int Mult = multTwonums(a, b);
	printf("%d multiply by %d is %d \n", a, b, Mult);
	
	int Div = DivTwonums(a, b);
	printf("%d divide by %d is %d \n", a, b, Div);
	
	int Mod = ModTwonums(a, b);
	printf("The mode of %d and %d is %d", a, b, Mod);
	
	
	
	
}

int addTwonums(int a, int b){
	
	int result;
	result = a + b;
	return result;
}

int diffTwonums(int a, int b){
	int diff;
	diff = a-b;
	return diff;
	
}

int multTwonums(int a, int b){
	int mult;
	mult = a  * b;
	return mult;
	
}

//int DivTwonums(int a, int b){
//	int div;
//	div = (a/b);
//	return div;
//	
//}


int ModTwonums(int a, int b){
	int mod;
	mod = (a%b);
	return mod;
}
