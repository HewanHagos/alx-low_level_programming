#include "main.h"
/**
 * _abs - computes
 * @c: the number to be computed
 * Return: absolute value of the number zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
