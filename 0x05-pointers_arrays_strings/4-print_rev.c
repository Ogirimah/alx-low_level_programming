#include "main.h"
/**
  * print_rev - Print a string in reverse
  *
  * @s: String to be printed in reverse
  * Return: Always void
  */
void print_rev(char *s)
{
	int i;
	char *j;

	i = strlen(s) - 1;
	while (!(i < 0))
	{
		j = &s[i];
		_putchar(*j);
		i--;
	}
	_putchar('\n');
}
