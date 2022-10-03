#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args passed into it
 * @argc: arg count
 * @argv: arg vector
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a <= argc; a++)
		printf("%d\n", argc - 1);

	return (0);
}
