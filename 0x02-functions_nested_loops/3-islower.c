#include "main.h"

/**
 * islower function - checks lowercase charcacters
 * @c is the int that we will use for argument
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
