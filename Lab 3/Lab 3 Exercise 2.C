#include <stdio.h>
#include <math.h>

int
main(void) 
{	
	double one = 100.0, two = 200.0, four = 400.0, eight = 800.0;
	printf("%-5s |%-10s |%-15s\n", "Meters", "Yards", "Miles");
	printf("%-6.lf |%-10lf |%-15lf\n", one, one * 1.094, one * 0.0006215);
	printf("%-6.lf |%-10lf |%-15lf\n", two, two * 1.094, two * 0.0006215);
	printf("%-6.lf |%-10lf |%-15lf\n", four, four * 1.094, four * 0.0006215);
	printf("%-6.lf |%-10lf |%-15lf\n", eight, eight * 1.094, eight * 0.0006215);
	
	return(0);
}

