#include "holberton.h"

/**
 * _strlen - Swaps integers wih pointers.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i;

while (*(s + i) != '\0')
{
i++;
}

return (i);
}
