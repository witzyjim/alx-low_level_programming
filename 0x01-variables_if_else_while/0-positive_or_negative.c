#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This program assigns random number to variable
 * and check if positive or negative
 * Return:0 when successfully exected
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("This is a postive number: %d\n", n);
	}
	else if (n == 0)
	{
		printf("This is zero: %d\n", n);
	}
	else
	{
		printf("The number is negative: %d\n", n);
	}
	return (0);
}
