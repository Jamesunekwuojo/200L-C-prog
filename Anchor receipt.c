// Generate receipt for Anchor university 
// showing nameof cust, price of goods, quantity, print out the total amount of all items
#include <stdio.h>
#include <stdlib.h>
int main(){
	int priceofG1, priceofG2, priceofG3, priceofG4, totalPrice;
	totalPrice = (priceofG1 + priceofG2 + priceofG3 + priceofG4);
	char nameofC[20];
	char nameofG1[20];
	char nameofG2[20];
	char nameofG3[20];
	char nameofG4[20];
	char quantityofG1[20];
	char quantityofG2[20];
	char quantityofG3[20];
	char quantityofG4[20];
	

	
	//To get/ read user input
	printf("<----ANCHOR UNIVERSITY RECEIPT(Users Input)---> \n");
	printf("Name of Customer: ");
	fgets(nameofC, 20, stdin);
	
	printf("<--Items Of Names--> \n");
	printf("Enter name of 1st Item: " );
	fgets(nameofG1, 20, stdin);
	
	printf("Enter name of 2nd Item: ");
	fgets(nameofG2, 20, stdin);
	
	printf("Enter name 3rd Item:");
	fgets(nameofG3, 20, stdin);
	
	printf("Enter name 4th Item: ");
	fgets(nameofG4, 20, stdin);
	
	printf("<---Quantity of Items--> \n");
	printf(" Quantity of Item1:");
	fgets(quantityofG1, 20, stdin);
	
	printf(" Quantity of Item2:");
	fgets(quantityofG2, 20, stdin);
	
	printf(" Quantity of Item3:");
	fgets(quantityofG3, 20, stdin);
	
	printf(" Quantity of Item4:");
	fgets(quantityofG4, 20, stdin);

	
	printf("<--Price Of Items --> \n");
	printf("Enter price of 1st item:");
	scanf("%d", &priceofG1);
	
	printf("Enter price of 2nd item:");
	scanf("%d", &priceofG2);
	
	printf("Enter price of 3rd item:");
	scanf("%d", &priceofG3);
	
	printf("Enter price of 4th item:");
	scanf("%d", &priceofG4);
	
	
	
	system("cls");
	// To display
	printf("<---- RECEIPT OUTPUT-----> \n");
	printf("Name of Customer is %s \n", nameofC);
	
	printf(" <---NAME OF ITEMS---> \n");
	printf("First Item's Name: %s", nameofG1);
	printf("Second Item's Name: %s", nameofG2);
	printf("Third Item's Name:  %s", nameofG3);
	printf("Fourth Item's Name:  %s \n", nameofG4);
	
	printf("<---QUANTITY OF ITEMS---> \n");
	printf("Quantity of Item1: %s", quantityofG1);
	printf("Quantity of Item2: %s", quantityofG2);
	printf("Quantity of Item3: %s", quantityofG3);
	printf("Quantity of Item4: %s \n", quantityofG4);
	
	printf("<---PRICE OF ITEMS---> \n");
	printf("Price of Item1:  %d \n", priceofG1);
	printf("Price of Item2:  %d \n", priceofG2);
	printf("Price of Item3:  %d \n", priceofG3);
	printf("Price of Item4:  %d \n", priceofG4);
	
	printf("Total amount of Items is $%d", totalPrice );
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}