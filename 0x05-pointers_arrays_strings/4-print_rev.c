#include "holberton.h"

/**
 * print_rev - Swaps integers wih pointers.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i, j;

while (*(s + i) != '\0')
{
i++;
}

for (j = (i - 1); j >= 0; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}
