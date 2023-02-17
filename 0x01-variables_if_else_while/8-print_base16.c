#include <stdio.h>

/**
  * main - Print numbers of base 16
  *
  * Return: Integer 0
  */
int main(void)
{
	int i, a, b, c;

	a = 48;
	b = 97;
	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	for (i = 0; i < 6; i++)
	{
		putchar(b);
		b++;
	}
	c = 10;
	putchar(c);
	return (0);
}
