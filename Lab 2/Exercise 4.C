#include <math.h>
#include <stdio.h>

int
main (void)
{
	double num;
	scanf("%lf", &num);
	printf("%.2lf", round(num));
}
