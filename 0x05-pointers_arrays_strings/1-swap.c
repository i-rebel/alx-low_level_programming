#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: integer a
 * @b: integer b
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
