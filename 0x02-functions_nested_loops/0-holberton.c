#include "holberton.h"

/**
*main - This is funtion
*Return: 0
*/
int main(void)
{
int h = 0;
char s[] = "Holberton\n";
for( h = 0; h < 10; h++)
{
char n = s[h];
_putchar(n);
}
return (0);
}