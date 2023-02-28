#include "main.h"
/**
  * print_sign - Prints the sign of a number
  *
  * @n: Number whose sign is to be printed
  * Return: 1, 0 or -1, for +ve, 0, and -ve respectively
  */
int print_sign(int n)
{
	unsigned int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = 0;
		_putchar('-');
	}
	else
	{
		i = -1;
		_putchar('0');
	}
	return (i);
}
