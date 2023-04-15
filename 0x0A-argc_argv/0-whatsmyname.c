#include "main.h"
#include <stdio.h>

/**
 * main - Prints program name followed by a new line
 *
 * @argc: Number of arguments
 *
 * @argv:  array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
