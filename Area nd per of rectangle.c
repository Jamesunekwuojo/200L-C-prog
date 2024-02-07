// A C program to find perimeter and Area of a rectangle
// 2(L + b)
// L *b
#include <stdio.h>
int main(){
	
	float L, b, area, perimeter;
	
	printf("Input value for Length:");
	scanf("%f", &L);
	printf("Input value for width:");
	scanf("%f", &b);
	
	area = L*b;
	perimeter = 2 *(L+b);
	
	printf("The perimeter of the rectangle is: %f \n", perimeter);
	printf("The area of the rectangle is : %f \n", area);
	
	
	
}
