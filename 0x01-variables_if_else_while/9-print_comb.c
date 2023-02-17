#include <stdio.h>

/**
  * main - Print numbers from 0 to 9 with spaces and commas
  *
  * Return: Integer 0
  */
int main(void)
{
	int i, a, b, c, d;

	c = 44;
	d = 32;
	a = 48;
	i = 0;
	while (i < 10)
	{
		putchar(a);
		if (a >= 57)
			break;
		putchar(c);
		putchar(d);
		i++;
		a++;
	}
	b = 10;
	putchar(b);
	return (0);
}
