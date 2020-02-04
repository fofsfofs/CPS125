#include <stdio.h>
#include <math.h>

int 
main(void)
{
	double r;
	printf("Enter the radius of the sphere: ");
	scanf("%lf", &r);
	printf("\nThe volume of the sphere is: %lf", (4.0 / 3.0) * acos(-1) * pow(r, 3));
	return 0;
}

