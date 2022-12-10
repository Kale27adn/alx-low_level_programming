#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Alphabet
 * Description: Alphabet in lowercase and uppercase
 *
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
