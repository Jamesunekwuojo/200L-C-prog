#include <stdio.h>
int main (){
	
	int i, sum, n;
	n =10;
	for(i=1; i<=10; i++){
		printf("Enter a positive no:");
		scanf("%d", &n);
		sum +=i;
		
		
	}
	printf("Sum is equal to %d", sum);
	return 0;
}

NOTE: The post-increment operator ensures that the original
 value of z is used in the expression before it's modified. 