// Programme to calculate Area and Circumference of a Circle

#include <stdio.h>
#define PI 3.142;
int main (){
	float r;
	float Area;
	float circumference;
	printf("Input the value for radius:");
	scanf("%f", &r);
	
	Area = PI*r*r;
	circumference = 2*PI*r;
	printf("The area of the circle is %f", Area);
	printf("The circumference of circle is %2f", circumference);
	
	return 0;
	
	
}
