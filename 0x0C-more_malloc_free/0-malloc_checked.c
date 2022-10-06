#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned int for arg
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b);
{
	void *mem

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
