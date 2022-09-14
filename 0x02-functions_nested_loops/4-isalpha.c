#include "main.h"

/**
 * isalpha function - checks for alphabetic character
 * @c is the int used in the argument
 * Return 1 if c is a letter
 * Return 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0)
}
