#include "main.h"

/**
 * _abs function - prints the sign of a number
 *
 * @n: int used for the arg
 * Return: Always (0)
 */
int _abs(int n)
{
		if (n > 0)
			return (n);
		else if (n < 0)
			return (-n);

		return (0);
}
