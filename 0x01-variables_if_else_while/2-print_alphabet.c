#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry pooint
 *
 * Return: 0 Success
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
