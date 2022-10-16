#include "function_pointers.h"

/**
 * int_index - on that searches for integer
 * @array: array of integers
 * @size: number of elements in an array
 * @cmp: function pointer to compare 
 * Return: the index of the first element for which the cmp function
 * does not return 0;
 * if no element matches, return -1;
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{

	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
