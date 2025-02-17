#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - return point
*Description:generate a number random
*return: Alweys 0 (Success)
*/
	int main(void)
{	
	

	/*main code*/
	srand(time(NULL));
	int n = rand(); RAND_MAX / 2;
	
	if (n > 0) {
	printf("%d is positive\n", n);
	}
	else if (n == 0) {
	printf("%d is zero\n", n);
	}
	else {
	printf("%d is negative\n", n);
	}
	return (0);
}
