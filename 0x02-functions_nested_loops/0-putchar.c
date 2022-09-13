#include "main.h"

/**
 * main - Entry Point
 *
 * Description: print alphabet in lowercase then new line
 *
 * Return Always 0
 */

int main(void)
{

	int i  = 0;
	char c;
	char s[] = "_putchar";

	while (i <= 7)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}
