#include <stdio.h>

/**
 * main - Entrt point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char x;
	char y;

	x = 'a';
	y = 'A';
	while ((x <= 'z') && (y <= 'Z'));
	{
		putchar(x,y);
		x++, y++;
	}
	putchar('\n');
	return (0);
}
