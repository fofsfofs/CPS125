#include <stdio.h>

int 
main(void)
{
	printf("%d", 1 && 30 % 10 >= 0 && 30 % 10 <=3);
	//no () required
	
	printf("\n%d", !0 && !(30 % 10 < 0) && !(30 % 10 >=3));
	
	
}
