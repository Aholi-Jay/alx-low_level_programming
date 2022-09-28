#include "main.h"

/**
 * factorial - f factorial - function that returns the factorial of a given number 
 * @n: int for arg
 *
 *Return: Always (0)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
