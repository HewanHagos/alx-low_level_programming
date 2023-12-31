#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be concatenated
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, a;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (a = 0; a < n && src[a] != '\0'; a++, length_of_string++)
	{
		dest[length_of_string] = src[a];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
