#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - Prints strings
 * @separator: The string to be printed
 * @n: The number of strings passed to the function
 * @...: A variable number os dtrings
 *  Sescription: if separator is Null, it is not printed
 * Return 0 - if successful
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
