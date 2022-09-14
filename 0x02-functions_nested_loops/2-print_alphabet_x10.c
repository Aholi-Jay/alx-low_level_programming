#include  "main.h"

/**
 * print alphabet_x10 - in lowercase followed by new line
 *
 *Return Always 0(Success)
 *
 */

void print_alphabet_x10(void)

{
	char b, i;

	for (i = 0; i <= 9; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
