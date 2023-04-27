#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: integers
 * Return: Always 0
 */

void print_to_98(int n)
{

	for (n =0; n <= 98; n++)
	{
		_putchar(n);
	}
			while (n >= 0 && n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
			return (0);
}
