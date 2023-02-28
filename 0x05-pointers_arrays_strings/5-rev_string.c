#include "main.h"
/**
  * rev_string - Reverses a string
  *
  * @s: String to be reversed
  * Return: Always void
  */
void rev_string(char *s)
{
	char x[100];
	int i, j;

	j = 0;
	i = strlen(s) - 1;
	strcpy(x, s);
	while (i >= 0)
	{
		s[j] = x[i];
		i--;
		j++;
	}
}
