#include <stdio.h>

int 
main(void)
{
	int a1, a2, t1, t2;
	double average;
	char grade;

	printf("Enter assignment 1 mark: ");
	scanf("%d", &a1);
	printf("\nEnter assignment 2 mark: ");
	scanf("%d", &a2);
	printf("\nEnter test 1 mark: ");
	scanf("%d", &t1);
	printf("\nEnter test 2 mark: ");
	scanf("%d", &t2);
	
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
	
	if (t1 < 50 || t2 < 50) {
		grade = 'F';
	}
	
	printf("\nThe letter grade is: %c", grade);
	
	return 0;
}

