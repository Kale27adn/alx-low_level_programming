#include "main.h"

/**
 * print_last_digit - entry
 *
 * Return: int.
 */

int Print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = lastt * -1;
	_putchar(last + '0');

	return (last);
}
