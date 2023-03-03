#include "main.h"
/**
  * _strcmp - Compares two strings
  *
  * @s1: First string
  * @s2: Second string
  * Return: int 15, -15, or 0
  *
  */
int _strcmp(char *s1, char *s2)
{
	int i, k;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		k = s1[i] - s2[i];
		if (k > 0)
		{
			return (15);
		}
		else if (k < 0)
		{
			return (-15);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
