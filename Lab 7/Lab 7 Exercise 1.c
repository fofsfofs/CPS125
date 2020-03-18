#include <stdio.h>

int main(void)
{
	double x_arr[25];
	const int size = sizeof(x_arr) / sizeof(x_arr[0]);
	int index = 0;
	double min, max;
	double x_second_arr[25];
	double norm_x_arr[25];

	while (index < size) {
		printf("Enter element number %d: ", index);
		scanf("%lf", &x_arr[index]);
		index++;
	}

	printf("\nEnter the normalized min value:");
	scanf("%lf", &min);
	printf("Enter the normalized max value:");
	scanf("%lf", &max);
	
	double xhigh = x_arr[0], xlow = x_arr[0];

	for (int i = 1; i < size; i++) {
		if (x_arr[i] > xhigh) {
			xhigh = x_arr[i];
		} else if (x_arr[i] < xlow) {
			xlow = x_arr[i];
		}
	}

	printf("\nLowest value: %lf \nHighest value: %lf\n", xlow, xhigh);

	for (int i = 0; i < size; i++) {
		x_second_arr[i] = x_arr[i] * 3;
		norm_x_arr[i] = min + ((x_arr[i] - xlow) * (max - min)) / (xhigh - xlow);
		printf("\nElement %d\nFirst array: %lf \nTripled array: %lf \nNormalized arrray: %lf\n", i, x_arr[i], x_second_arr[i], norm_x_arr[i]);
	}

	return 0;
}

