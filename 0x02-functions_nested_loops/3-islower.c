#include "holberton.h"
#include <ctype.h>

/**
 * _islower - check the code for Holberton School students.
 * @c: The character to print
 * Return: 0.
 */
int _islower(int c)
{
if (islower(c) == 0)
{
return (0);
}
else
{
return (1);
}
}