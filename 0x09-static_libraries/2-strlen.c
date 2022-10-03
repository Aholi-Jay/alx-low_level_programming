#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: integer used for arg
 * Return: String Length
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s != '\0')
	{
		s++;
		y++;
	}

	return (y);
}
