#include <stdio.h>
/**
 * swap_int -Swaps the values of two integers.
 * @a: the first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
	/* the function that swap the values of two integers. */
{

	int temp = *a;

	*a = *b;
	*b = temp;
}
