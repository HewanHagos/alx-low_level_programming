#include "main.h"
/**
 * _islower - Checks
 * @c: The characheter to be checked
 * Return: 1 for lower case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
