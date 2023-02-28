/**
  * _islower - Checks for lowercase characters
  *
  * @c: Character to be checked
  *
  * Return: Integer 1 or 0
  */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
