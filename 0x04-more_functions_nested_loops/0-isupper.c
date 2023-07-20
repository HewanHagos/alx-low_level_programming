#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: the charachter to be checked
 * Return: 1 for uppercase charachter or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
