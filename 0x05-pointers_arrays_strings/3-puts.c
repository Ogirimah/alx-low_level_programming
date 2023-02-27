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
	char j;

	while (*(str + i) != '\0')
	{
		j = *(str + i);
		_putchar(j);
	}
	_putchar('\0');
	return ();
}
