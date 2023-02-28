#include "main.h"
/**
  * puts_half - Prints half of a string
  *
  * @str: String to be printed
  * Return: Always void
  */
void puts_half(char *str)
{
	int i, j;

	i = strlen(str);
	if (i % 2 == 1)
	{
		for (j = (i / 2) + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
