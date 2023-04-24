#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if else
 *Return: Returns 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit;
	char phrase[] = Last digit of;

	if (lastDigit > 5)
	{
		printf("%s is %d and is greater than 5\n" lastDigit, n);
	}
	else if (lastDigit == 0)
	{
		printf("%s is %d and is 0\n" lastDigit, n);
	}
	else if (lastDigit > 6 && != 0)
	{
		printf("%s is %d and is less than 6 and not 0\n" lastDigit, n);
	}
	return (0);
}
