#include "main.h"
/**
  * print_array - Print n elements of an array
  *
  * @a: Array to be printed
  * @n: Number of elements of array to be printed
  * Return: Always void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
