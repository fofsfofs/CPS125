#include <stdio.h>

int 
main(void)
{
	double n1, n2;
	printf("Enter the first number: ");
	scanf("%lf", &n1);
	printf("\nEnter the second number: ");
	scanf("%lf", &n2);
	
	if (n1 == n2) {
		printf("\nThe numbers inputted are the same therefore the triple of their sum is: %lf", (n1 + n2) * 3);
	} else {
		printf("\nThe numbers inputted are differemt therefore their sum is: %lf", n1 + n2);
	}
	
		
	return 0;
}

