// A C program to print out of stock when the nmber of goods ordered is more than no of goods in stock
// Variable names:
// No of goods in stock
// No of goods Order
//new No of goods in stock
#include <stdio.h>
int main(){
	int no_goodsinstock, no_goodsordered, newno_goods;
	printf("Enter number of goods in stock:");
	scanf("%d", &no_goodsinstock);
	printf("Enter number of goods you want to order:");
	scanf("%d", &no_goodsordered);
	
	if (no_goodsinstock<no_goodsordered){
		printf("Out of stock!");
	} else {
		newno_goods = no_goodsinstock - no_goodsordered;
		
		printf("New number of goods in stock is %d",newno_goods );
	}
	return 0;
}