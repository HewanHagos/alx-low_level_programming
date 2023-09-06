#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: there character to print
 * Return: 1
 * on error, -1 is returned and error is set appropriately
 */

int _putchaar(char c)
{
	return (write(1, &c, 1));
}
