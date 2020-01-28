#include <stdio.h>
#include <math.h>

int
main(void) 
{	
	//a
	int a, b, c, d;
 	printf("Enter four numbers one after another\n");
 	scanf("%d", &a);	
 	scanf("%d", &b);
 	scanf("%d", &c);
 	scanf("%d", &d);
 	
 	//b
 	printf("The sum of the four values is: %d\n", a + b + c + d);
 	
 	//c
 	printf("The sum of the first two minus the sum of the last the last two: %d\n", a + b - (c + d));
 	
 	//d
 	printf("The sum of the of sqaures of the four numbers: %lf\n", pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2));
 	
 	//e
 	printf("%.2f", (sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / (a + b + c + d)));
	return(0);
}
