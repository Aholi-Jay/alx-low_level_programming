#include "main.h"

/**
 * main - Entry Point
 *
 * Description: prints alphabet with _putchar
 *
 * Return Always 0
 */

void printalphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar (b);
	}
		_putchar ('\n');
}
