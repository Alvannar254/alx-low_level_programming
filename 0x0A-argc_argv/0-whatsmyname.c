#include "main.h"
#include <stdio.h>

/**
 * main - print name of program followed by new line
 * @argc: number of arguments to program
 * @argv: array of pointers to each command line argument
 *
 * Return: 0 always
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[]);
	return (0);
}
