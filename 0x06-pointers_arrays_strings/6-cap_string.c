#include "main.h"
/**
  * cap_string - Capitalize all words of a string
  *
  * @a: String to be capitalized
  * Return: Pointer to the string
  */
char *cap_string(char *a)
{
	int i, j;

	i = strlen(a);
	if (a[0] > 96 && a[0] < 123)
	{
		a[0] = a[0] - 32;
	}

	for (j = 1; j < i; j++)
	{
		if (
				/**
				  * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
				  * Next letter must be capital
				  */
				(
				a[j] == 32
				|| a[j] == 9
				|| a[j] == 10
				|| a[j] == 43
				|| a[j] == 59
				|| a[j] == 46
				|| a[j] == 33
				|| a[j] == 63
				|| a[j] == 34
				|| a[j] == 40
				|| a[j] == 41
				|| a[j] == 123
				|| a[j] == 125
				)
				&& (a[j + 1] > 96 && a[j + 1] < 123))
		{
			a[j + 1] = a[j + 1] - 32;
		}
	}
	return (a);
}
