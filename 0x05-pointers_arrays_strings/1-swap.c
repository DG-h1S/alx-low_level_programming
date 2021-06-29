#include "holberton.h"

/**
 * swap_int - Swaps integers wih pointers.
 *
 * @a: is a pointer to an int
 *
 * @b: is a pointer to an int
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
