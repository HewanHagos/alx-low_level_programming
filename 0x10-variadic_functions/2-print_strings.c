#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		if (str == 0)
			printf("(nil)");

		else
			printf("%s", str);
	}
	printf("\n");

	va_end(list);
}
