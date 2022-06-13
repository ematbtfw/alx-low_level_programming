#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
