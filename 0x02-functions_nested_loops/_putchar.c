#include <stdio.h>
#include <string.h>
/**
  * main - Uses putchar() to print to standard output
  *
  * @a: The string to be printed
  *
  * Return: Integer 0.
  */
int callprint(char a[])
{
	unsigned long i;
	char b;

	for (i = 0; i < strlen(a); i++)
	{
		b = a[i];
		putchar(b);
	}

	return (0);
}
