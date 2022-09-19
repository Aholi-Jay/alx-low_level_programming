include "main.h"

/**
 * swap_int - function that swaps 2 integers
 * @a: integer for argument
 * @b: integer for argument
 * Return (0)
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
