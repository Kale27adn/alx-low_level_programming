#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	if (n < 6)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
