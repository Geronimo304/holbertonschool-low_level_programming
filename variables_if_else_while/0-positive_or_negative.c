#include <stdio.h>
#include <stdlib.h>

/**
*main - return point
*Description:generate a number random
*return 0;
*/
	int main(void)
{	
	int n = rand();
	if (n > 0) {
	        printf("%d is positive\n", n);
	} else if (n == 0) {
	        printf("%d is zero\n", n);
	} else {
		printf("%d is negative\n", n);
	}
	return (0);
}
