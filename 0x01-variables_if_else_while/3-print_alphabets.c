#include <stdio.h>

/**
  * main - Print the alphabet in lowercase and uper case
  *
  * Return: integer 0
  */
int main(void)
{
	int a, b, c;
	int i;

	a = 97;
	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	c = 65;
	for (i = 0; i < 26; i++)
	{
		putchar(c);
		c++;
	}
	b = 10;
	putchar(b);
	return (0);
}
