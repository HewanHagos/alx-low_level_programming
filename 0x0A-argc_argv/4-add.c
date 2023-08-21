#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check -there are digit
 * @str: array str
 * Return: 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (coint < strlen(str[count]))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print the name of the program
 * @argc: coutn arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;
	 count = 1;

	 while (count < argc)
	 {
		 if (check_num(argv[count]))
		 {
			 str_to_itn = atoi(argv[count]);
			 sum += str_to_int;
		 }
		 else
		 {
			 printf("Error\n");
			 return (1);
		 }
		 count++;
	 }
	 printf("%d\n", sum);
	 return (0);
}
