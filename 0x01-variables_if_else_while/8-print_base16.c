#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entey
 * Description: Alphabet in lowercase
 *
 * Retrun: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
