#include "main.h"

/**
 * print_sign function - prints the sign of a number
 *
 * @n: char used for the arg
 *
 * Return Always (0)
 *
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
