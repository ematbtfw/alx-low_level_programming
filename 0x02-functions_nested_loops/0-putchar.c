#include "0-putchar.c"
/**
 * main - _putchar
 *
 * Return: Always 0 (Success)
 */
int main(putchar)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
