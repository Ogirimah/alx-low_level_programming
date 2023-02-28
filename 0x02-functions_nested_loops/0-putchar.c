#include "main.h"
/**
  * main - Use _putchar to print alphabet in lowercase followd by newline
  *
  * Return: Integer 0
  */
int main(void)
{
	int i;
	char *a;

	i = 0;
	a = "_putchar";
	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
