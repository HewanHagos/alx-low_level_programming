#include "main.h"

/**
 * _print_rec_recursion - prints a string reverse.
 * @s: the string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
