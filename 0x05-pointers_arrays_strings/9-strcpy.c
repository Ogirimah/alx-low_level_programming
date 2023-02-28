#include "main.h"
/**
  * *_strcpy - Copy the string pointed to
  *
  * @dest: Pointer to memory to copy the string to
  * @src: Pointer to memory to copy the string from
  * Return: Pointer to the destination
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
