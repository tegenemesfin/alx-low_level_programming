#include "main.h"
/**
  * _isupper - checks for uppercae characters
  * @c: the function parameter
  * Return: 1 if it's upercase
  */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
