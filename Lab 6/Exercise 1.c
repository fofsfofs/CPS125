#include <stdio.h>

void f4(int y, int * addr1, int * addr2);

int main(void)
{
	int x, num_of_tens, remainder;
	while (!(x>= 10 && x<= 99)) {
		printf("Input a number from 10-99: ");
		scanf("%d", &x);
	}

	f4(x, &num_of_tens, &remainder);
	printf("Number of tens: %d\nRemainder: %d", num_of_tens, remainder);
	
	return 0;
}

void f4(int y, int * addr1, int * addr2) {
	* addr1 = y / 10;
	* addr2 = y % 10;
}

