#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to an integer to be swapped.
 * @b: A pointer to an integer to be swapped.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
