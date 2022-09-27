#include "main.h"

/**
 * set_string - shows value of a pointer to a char.
 * @s: double pointer.
 * @to: shows where the value will be set to.
 * Return: Value of pointer to cahr.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
