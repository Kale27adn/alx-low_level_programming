#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Description: Alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
