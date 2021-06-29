#include "holberton.h"

/**
 * _puts - Swaps integers wih pointers.
 *
 * @str: is a pointer to a char
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
int i;

while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
