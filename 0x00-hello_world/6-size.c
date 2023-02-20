#include <stdio.h>
/**
  * main - Print the size of arious types
  *
  * Return: Integer 0
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long));
	printf("Size of long long int: %d byte(s)\n", sizeof(double));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
