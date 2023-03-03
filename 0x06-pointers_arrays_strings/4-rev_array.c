#include "main.h"
/**
  * reverse_array - Reverse the contents of an array
  *
  * @a: An array of intgers
  * @n: Number of elements to swap
  * Return: Always nothing
  */
void reverse_array(int *a, int n)
{
	int h, i;

	for (i = 0; i < n / 2; i++)
	{
		h = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = h;
	}
}
