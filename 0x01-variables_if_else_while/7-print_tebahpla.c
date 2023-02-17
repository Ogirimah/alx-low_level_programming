#include <stdio.h>

/**
  * main - Print the alphabet in lowercase and in reverse
  *
  * Return: integer 0
  */
int main(void)
{
	int a, b;
	int i;

	a = 122;
	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a--;
	}
	b = 10;
	putchar(b);
	return (0);
}
