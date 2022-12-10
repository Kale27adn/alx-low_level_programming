#include <stdio.h>
#include <stdlib.h>
/**
 * Main - Entey
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';
	int digit = '0';
	for (digit = '0'; digit <= '9'; digit++)
	{
		for (num = '0'; num <= '9'; num++)
		{
			if (!((num == digit) || (digit > num)))
			{
				putchar(digit);
				putchar(num);
				if(!(num == '9' && digit == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
