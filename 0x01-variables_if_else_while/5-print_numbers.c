#include <stdio.h>
#include <stdlib.h>
/**
 * Main - single digit numbers
 *
 * Return: Always 0
 */

int main(void)

{
	char num = '0';
		while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
