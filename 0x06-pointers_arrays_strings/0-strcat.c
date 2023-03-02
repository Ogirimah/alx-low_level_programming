#include "main.h"
/**
  * *_strcat - Concatenates two strings
  *
  * @dest: String to be added to
  * @src: String to be added
  * Return: Returns a pointer to the concatenated string
  */
char *_strcat(char *dest, char *src)
{
	int i, j, k, l;
	char s[100];

	i = strlen(dest);
	j = strlen(src);
	l = 0;
	for (k = 0; k < i; k++)
	{
		s[k] = dest[k];
	}
	for (k = i; k < j + i; k++)
	{
		s[k] = src[l];
			l++;
	}
	s[i + j] = '\0';
	for (k = 0; k <= i + j; k++)
	{
		dest[k] = s[k];
	}
	return (dest);
}
