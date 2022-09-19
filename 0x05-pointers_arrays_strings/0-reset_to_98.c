#include "main.h"

/**
 * reset_to_98 - Main function that takes a pointer to an int.
 *
 * @n: intager used for argument
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int n;

	n = 98;
	_putchar("n = %d\n", n);
	reset_to_98(&n);
	return (0);
}
