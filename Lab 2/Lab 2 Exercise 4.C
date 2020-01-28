#include <math.h>
#include <stdio.h>

int
main (void)
{
	double num;
	scanf("%lf", &num);
	//a
	printf("\nThe number rounded to the nearest hundredth: %lf\n", round(num / 100.0) * 100.0); 
	printf("The number rounded to the nearest thousandth: %lf\n\n", round(num / 1000.0) * 1000.0);
	
	//b
	printf("The number rounded to one decimal place: %.1f\n", num); 
	return (0);
}
