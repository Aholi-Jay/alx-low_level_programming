#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return Always 0
 */


void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
