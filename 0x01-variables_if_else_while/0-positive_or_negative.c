#include <stdlib.h>
#include <time.h>
#include <stdio.h> /* more headers goes there */

/**
 * main - prints a program that assigns a random number to the variable
 *Return: Returns 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int number;

	if (number > 0)
	{
		printf("is positive");
	}
	else if (number == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("is negative");
	}
	return (0);
}
