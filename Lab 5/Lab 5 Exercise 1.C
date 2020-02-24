#include <stdio.h>
#include <stdlib.h>

int 
main(void)
{
	FILE * file;
	file = fopen("data5.txt", "r");
	int bn, n, samples;
	double avg;
	
	
	while (feof(file) == 0) {
		avg = 0;
		
		fscanf(file, "%d %d", &bn, &n);
		printf("\nBeach Number: %d\nNumber of samples: %d\n", bn, n);
		for (int i = 1; i < n + 1; i++) {
			fscanf(file, "%d", &samples);
			avg += samples;
			printf("Sample %d: %d\n", i, samples);
		}	
		
		avg /= n;
		
		printf("Average number of organisms per 100ml: %.2lf\n", avg);
		
		if (avg < 3500) {
			printf("This beach is safe!\n");
		} else {
			printf("This beach is not safe!\n");
		}
	}
	
	fclose(file);	
	return 0;
}

