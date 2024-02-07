// A C code to check if a number entered is between 1-20, 31- 60, 61 -90
#include <stdio.h>
int main(){
	int range;
	printf("Enter a value to check for it's range:");
	scanf("%d", &range);
	
	if (range==1 && range<=20){
		printf("Range of the number entered is 1 - 0");
	} else if (range==31 && range<=60){
		printf("Range of the number entered is b/w 31 - 60");
		
	} else if(range==61 && range<=90){
		printf("Range of the numer enterd is b/w 61 -90");
	} else{
		printf("Value entered is out of range");
	}
} 