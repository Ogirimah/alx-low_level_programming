#include "main.h"
/**
  * _strncat - Concatenates a number of characters firm a string to another
  *
  * @dest: String to be added to
  * @src: String to be taken from and added
  * @n: Number of string to be added
  * Return: Pointer to the desitnation
  */
char *_strncat(char *dest, char *src, int n)
	{
	int i, j, k, l;
	char s[1000000];

	i = strlen(dest);
	j = strlen(src);

	l = 0;
	for (k = 0; k < i; k++)
	{
		s[k] = dest[k];
	}
	for (k = i; k < j + n && l < n; k++)
	{
		s[k] = src[l];
			l++;
	}
	for (k = 0; k <= i + j; k++)
	{
		dest[k] = s[k];
	}
	return (dest);
}
