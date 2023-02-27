#include "main.h"
/**
  * _strlen - Returns the length of a string
  *
  * @s: String whose lenght is to be returned
  * Return: Always int.
  */
int _strlen(char *s)
{
	int i = 0;
	char j;

	do {
		j = *(s + i);
		i++;
	} while (j != '\0');
	return (i - 1);
}
