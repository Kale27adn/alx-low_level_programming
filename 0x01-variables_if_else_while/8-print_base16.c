#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Alphabet in lowercase
 *
 * Return: Always 0 ( Success)
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