#include "main.h"

/**
 * _isdigit - check if it is a digit or not
 * @c: test character
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
