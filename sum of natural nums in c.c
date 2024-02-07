#include <stdio.h>
int main(){
	int i, n, sum =0;
	printf("Enter a positive number");
	scanf("%d",&n);
	i=1;
	n=4;

	
	while(i<=n){
		sum =sum + i; //sum+=i
		++i;
	}
	printf("sum is equal %d", sum);
	return 0;
	
}