#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: strint to append to
 * @s2: string to conatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, len1 = 0, len2 = 0, len3 = 0;
			if (s1 == NULL)
				s1 = "";
			if (s2 == NULL)
				s2 = "";
			if (n >= len2)
				len3 = i + len2;
			else
				len3 = i + n;
			s = malloc(sizeof(char) * len3 + 1);
			if (s == NULL)
				return (NULL);
			len2 = 0;
			while (len1 < len3)
			{
				if (len1 <= i)
					s[len1] = s1[len1];

				if (len1 >= i)
				{
					s[len1] = s2[len2];
					len2++;
				}
				len1++;
			}
			s[len1] = '\0';
	return (s);
	}
