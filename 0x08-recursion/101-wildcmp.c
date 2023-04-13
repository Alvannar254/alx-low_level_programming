include "main.h"

/**
 * wildcmp - compares 2 strings and returns 1 if identical, otherwise return o
 * @s1: first string
 *
 * @s2: second string
 *
 *  Return: 1 if the string can be considered identical, otherwise return o
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (!*s1)
		return (wildcmp(s1, s2 + 1));
	else
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	else if (*s1 != *s2)
		return (0);
	else if (!*s1 && !*s2)
		return (1);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
