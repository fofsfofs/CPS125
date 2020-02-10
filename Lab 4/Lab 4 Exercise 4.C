#include <stdio.h>

int 
main(void)
{
	double n;
	
	printf("Enter a Richter scale number: ");
	scanf("%lf", &n);
	
	if (n > 7.5) {
		printf("\nCatastrophe: Most buildings destroyed");
	} else if (n >= 6.5 && n < 7.5) {
		printf("\nDisaster: Houses and buildings may collapse");
	} else if (n >= 5.5 && n < 6.5) {
		printf("\nSerious damage: Walls may crack or fall");
	} else if (n >= 5.0 && n < 5.5) {
		printf("\nSome damage");
	} else if (n < 5.0) {
		printf("\nLittle or no damage");
	}
}
