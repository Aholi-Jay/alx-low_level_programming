#include "main.h"

/**
* print_number - Prints a number
*
* @n: The number to be printed
*
* Return: Always 0.
*
*/

void print_number(int n)
{
	unsigned int mum = n;
	if (n < o)
	{
		putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	putchar(num % 10 + '0');
}
