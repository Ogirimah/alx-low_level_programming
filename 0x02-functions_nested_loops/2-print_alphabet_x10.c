#include "main.h"
/**
  * print_alphabet_x10 - Print lowercase alphabets 10 times
  *
  * Return: Always void
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
