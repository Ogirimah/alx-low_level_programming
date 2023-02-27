#include "main.h"
/**
  * swap_int - Swap the value of two integers
  *
  * @a: Pointer to memory location of first integer
  * @b: Pointer to memory location of second integer
  * Return: Always void
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
