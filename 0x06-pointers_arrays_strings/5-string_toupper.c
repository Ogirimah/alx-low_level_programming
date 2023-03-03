#include "main.h"
/**
  * string_toupper - Changes all lowercase letters of a string to uppercase
  *
  * @a: Pointer to string to be processed
  * Return: Char variable
  */
char *string_toupper(char *a)
{
	int i, j;

	j = strlen(a);
	for (i = 0; i < j; i++)
	{
		if (a[i] > 96 && a[i] < 123)
		{
			a[i] = a[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (a);
}
