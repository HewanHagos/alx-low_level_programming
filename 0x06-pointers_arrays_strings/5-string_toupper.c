#include "main.h"
/**
 * string_toupper - function that change
 * all lowercase letters of a string to uppercase
 * @x: pointer to string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *x)
{
	int index = 0;

	while (x[index])
	{
		if (x[index] > 'a' && x[index] <= 'z')
			x[index] -= 32;
		index++;
	}
	return (x);
}

