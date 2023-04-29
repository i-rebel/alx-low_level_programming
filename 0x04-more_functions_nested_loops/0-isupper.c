#include "main.h"

/**
 * _isupper - checks for upper case
 * @c: character to be checked
 * Return: Always 0
 */

int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
		return (1);
	else
		return (0);
}
