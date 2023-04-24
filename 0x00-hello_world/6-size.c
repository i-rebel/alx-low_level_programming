#include <stdio.h>

/**
 *main - a program that prints the size of various types on the computer
 *Return: Returns 0 (Success)
 */

int main(void)
{
	printf("Size of int : %d", sizeof(int));
	printf("Size if char : %d", sizeof(char));
	printf("Size of long int : %d", sizeof(long int));
	printf("Size of long long int : %d", sizeof(long long long int));
	printf("Size of float : %d", sizeof(float));
	return (0);
}
