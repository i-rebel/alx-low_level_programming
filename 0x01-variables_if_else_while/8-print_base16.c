#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	int y;

	x = 'a';
	x =  0;
	while (y < 10)
	{
		putchar(y + '0');
		y++;
	}
	while (x < 'g')
	{
		putchar(x);
		x++;
	}
	printchar('\n');
	return (0);
}
