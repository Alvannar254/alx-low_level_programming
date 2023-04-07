#include "main.h"
#include <string.h>

/**
 * _strcat - concatenating string
 * @dest: string to be concatenated
 * @src: string to be concatenate
 * Return: dest always
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
