#include "main.h"
/**
  * puts2 - Prints every other character of a string
  *
  * @str: String to be printed
  * Return: Always void
  */
void puts2(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
