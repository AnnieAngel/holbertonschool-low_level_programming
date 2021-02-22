#include "holberton.h"

/**
*print_alphabet - This is funtion
*/
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}


/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 */
void print_alphabet_x10(void)
{
int a;
for (a = 0; a < 10; a++)
{
print_alphabet();
}
}
