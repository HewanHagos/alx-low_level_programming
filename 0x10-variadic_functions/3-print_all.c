#include "variadic_functions.h"
/**
 * print_all - prints anyhing
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

