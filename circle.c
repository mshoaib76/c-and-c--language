#include <stdio.h>

#include<conio.h>

#define PI 3.14
int main()

{
	int r;
	
	float a,c;
	
	printf("enter radius=");
	
	scanf("%d",r);
	
	a=PI*r*r;
	
	c=2*PI*r;
	
	printf(" area of circle=%f",a);
	
	printf("\n circumference of circle=%f",c);
	
}
