#include "main.h"
/**
  * _strncpy - Copies a string
  *
  * @dest: Addres to copy to
  * @src: Address to copy from
  * @n: Number of string to be copied
  * Return: Always the pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

		return (dest);
}
