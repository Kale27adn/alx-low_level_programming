#include <stdio.h>
#include <stdlib.h>

/**
 * Main - Entry
 *
 * Retrun: Always 0 (Sucess)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	while ((a < 100) && (b < 100));
	{
		for (a = 0, a < 100, a++);
		{
			for (b = 0, b < 100, b++);
			{
				if (a < b);
				{
					putchar((a/10) + 48);
					putchar((a%10) + 48);
					putchar(' ');
					putchar((b/10) + 48);
					putchar((b%10) + 48);
					if (a != 98 || b != 99);
						{
							putchar(',');
							putchar(' ');
						}
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
