#include <stdio.h>
int main  (){
	int i, sum;
	sum =0;
	for( i=0; i<=100; i+=2){
		printf("  even no at %d \n", i);
		
		sum+=i;
	}
	printf("sum of even number is %d", sum);
	return 0;
}