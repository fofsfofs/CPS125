#include <stdio.h>

int 
main(void)
{
	int n1, n2, n3;
	int g, m, l;
	printf("Enter the first number: ");
	scanf("%d", &n1);
	printf("\nEnter the second number: ");
	scanf("%d", &n2);
	printf("\nEnter the third number: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n2 > n3) {
		g = n1;
		if (n2 > n3) {
			m = n2;
			l = n3;
		} else {
			m = n3;
			l = n2;
		}
	} else if (n2 > n1 && n2 > n3) {
		g = n2;
		if (n1 > n3) {
			m = n1;
			l = n3;
		} else {
			m = n3;
			l = n1;
		}
	} else {
		g = n3;
		if (n1 > n2) {
			m = n1;
			l = n2;
		} else {
			m = n1;
			l = n2;
		}
	}
	
	printf("\nThe numbers in decreasing order are: %d, %d, %d", g, m, l);
	return 0;	
}
		
		



