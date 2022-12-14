#include "main.h"

/**
 * jack_bauer - entry
 * Return: void
 *
 */

void jack_bauer(void)
{
	int h;
	int b;
	int c;
	int d;
	int a = 9;

	b = 0;
	while (b <= 2)
	{
		if (b == 2)
		{
			a = 3;
		}
		h = 0;
		while (h <= a)
		{
			d = 0;
			while (d <= 5)
			{
				c = 0;
				while (c <= 9)
				{
					_putchar('0' + b);
					_putchar('0' + h);
					_putchar(':');
					_putchar('0' + d);
					_putchar('0' + c);
					_putchar('\n');
					c++;
				}
				d++;
			}
			h++;
		}
		b++;
	}
}
