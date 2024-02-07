
// Functions: for code userability
// Functins - modularity
// stdlib functs- inbuit functions in C
// User defined functs - 
// Three aspets:
// funct call -  u can call funct from any where in ur program
// funct declration
// funct prototype
// funct definition - what u want ur funct to do
// void function(int a) - funct prototype
// Actual prameters- value or parameter that are passed into our function 
#include <stdio.h>
int addTwonums(int a, int b);

int main() {
	
	printf(addTwonums(4, 5));
}

int addTwonums(int a, int b){
	int result;
	result = a+b;
	
}