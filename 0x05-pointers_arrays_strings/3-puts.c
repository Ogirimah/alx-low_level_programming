#include "main.h"
/**
  * _puts - Prints a string followed by a newline
  *
  * @str: String to be printed
  * Return: Always void
  */
void _puts(char *str)
{
	int i;
	int j;
	int k = '\0';

	while (*(str + i) != '\0')
	{
		j = *(str + i);
		_putchar(j);
		i++;
	}
	_putchar(k);
	return ();
}
