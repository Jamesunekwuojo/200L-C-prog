// A C program to calculate the volume and Surface Area of a Cylinder
//volume of a Cylinder = pIr²h
//The Lateral Surface Area of a Cylinder = 2pIrh
#include <stdio.h>
    #define PI 3.142
int main(){
	
	float r, SA, h, V;
	
	printf("Input value for radius:");
	scanf("%f", &r);
	printf("Input value for Height:");
	scanf("%h", &h);
	
	V = PI * r * r *h;
	SA= 2 *( PI * r * h);
	printf("The Surface area of the cylinder is %.2f  \n", SA);
	printf("The Volume of the cylinder is  %.2f", V);
	
	
	
	
	
	
	
	
}
