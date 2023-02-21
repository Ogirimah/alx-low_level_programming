#include <stdio.h>
/**
  * main - Use _putchar to print alphabet in lowercase followd by newline
  *
  * Return: Integer 0
  */
int main(void)
{
	char a[] = "_putchar";

	for (int i = 0; i < strlen(a); i++)
	{

		putchar(a[i]);
	}
	putchar("\n");
	return (0);
}
