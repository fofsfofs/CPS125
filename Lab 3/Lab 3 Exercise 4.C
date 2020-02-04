#include <stdio.h>

int 
main(void)
{
	double a, b;
	printf("Enter the first angle: ");
	scanf("%lf", &a);
	printf("\nEnter the second angle: ");
	scanf("%lf", &b);
	printf("\nThe missing angle is: %lf", 180.0 - a - b);
	return 0;
}

