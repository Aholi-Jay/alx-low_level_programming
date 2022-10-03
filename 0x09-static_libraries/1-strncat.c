#include "main.h"
/**
 *_strncat - function that cancatenates two strings.
 *@dest: pointer to the dest string,
 *@src: pointer to the src string
 *@n: number of bytes to be concatenated
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
