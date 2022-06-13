#include "main.h"
/**
 * rev_string - prints a reverse string
 * @s: a pointer to an int that will be changed
 *
 *Return: void
 */
void rev_string(char *s)
{
char *start_c. *end_c. c;
	int i;
	int j;
	int temp;
	int length;

	while (s[i] != 0)
	{
		i++;
	}

	length = i;
	i = 0;
	j = length - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
