#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * return - Always 0 (success)
 *
 *Description: The assigns random numbers to the variable n
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d", n);
	if (n > 0)
	{
	printf(" is positive\n");
	}

	else if (n == 0)
	{
	printf(" is zero\n");
	}

	else
	{
	printf(" is negative\n");
	}

	return (0);
}
