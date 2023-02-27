#include "main.h"
/**
  * _puts - Prints a string followed by a newline
  *
  * @str: String to be printed
  * Return: Always void
  */
void _puts(char *str)
{
	int k = '\n';

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(k);
}
