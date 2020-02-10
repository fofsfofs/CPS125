#include <ctype.h>
#include <stdio.h>

int 
main(void)
{
	char c;
	
	printf("Enter a warship class: ");
	scanf("%c", &c);
	
	switch (toupper(c))
	{
		case 'S':
		printf("\nThe warship class is submarine");
		break;
		
		case 'C':
		printf("\nThe warship class is cruiser");
		break;
		
		case 'D':
		printf("\nThe warship class is destroyer");
		break;
		
		case 'F':
		printf("\nThe warship class is frigate");
		break;
		
		case 'A':
		printf("\nThe warship class is aircraft carrier");
		break;
		
		default: 
		printf("\nThe warship class is unknown");
	}
}
