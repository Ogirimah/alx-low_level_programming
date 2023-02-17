#include <stdio.h>

/**
  * main - Print the alphabet in lowercase
  *
  * Return: integer 0
  */
int main(void)
{
	int a, b;
	int i;

	a = 97;
	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
	b = 10;
	putchar(b);
	return (0);
}
