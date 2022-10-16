#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: the passed array
 * @size: size of the array
 * @action: pointer to the function we are to use
 * Return: Always (0)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
