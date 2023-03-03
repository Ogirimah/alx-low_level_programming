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
	for (j = 0; j < i; j++)
	{
		if (a[j] > 96
