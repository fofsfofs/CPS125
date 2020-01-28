#include <math.h>
#include <stdio.h>

int 
main (void) 
{
	double lr = 0; //long radius
	double sr = 0; //short radius
	double c = 0;
	printf("Enter long radius: ");
	scanf("%lf", &lr);
	printf("Enter short radius: ");
	scanf("%lf", &sr);
	c = 2 * acos(-1) * sqrt(((pow(lr, 2) + pow(sr, 2)) / 2));
	printf("The circumference is: %lf", c);
	return (0);
}
