#include <stdio.h>

/**
  * main - Print numbers from 0 to 9
  *
  * Return: Integer 0
  */
int main(void)
{
	int i, a, b;

	for (i = 0; i < 10; i++)
	{
		a = i + 48;
		putchar(a);
	}
	b = 10;
	putchar(b);
	return (0);
}
