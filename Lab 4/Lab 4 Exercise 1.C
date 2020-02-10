#include <stdio.h>

int 
main(void)
{
	int a1, a2, t1, t2;
	double average;
	char grade;

	printf("Enter Assignment grades: ");
	scanf("%d %d", &a1, &a2);
	printf("\nEnter Test grades: ");
	scanf("%d %d", &t1, &t2);
	
	average = (a1 + a2 + t1 + t2) / 4;
	
	printf("\nThe average is: %.2lf%s", average, "%");
	
	if (average >= 80) {
		grade = 'A';
	} else {
		if (average >= 70) {
			grade = 'B';
		} else {
			if (average >= 60) {
				grade = 'C';
			} else {
				if (average >= 50) {
					grade = 'D';
				} else {
					grade = 'F';
				}
			}
		}
	}
	
	printf("\nThe letter grade is: %c", grade);
	
	return 0;
}

