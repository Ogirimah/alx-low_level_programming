#include "main.h"
/**
  * leet - Encode a string into 1337
  *
  * @a: String to be encoded
  * Return: Pointer to the encoded string
  */
char *leet(char *a)
{
	int i, j;
	char b[] = "aAeEoOtTlL";
	char c[] = "4433007711";

	for (i = 0; *(a + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (b[j] == a[i])
				a[i] = c[j];
		}
	}
	return (a);
}
