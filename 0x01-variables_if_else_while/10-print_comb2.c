#include <stdio.h>
/**
*main - This is funtion
*Return: 0
*/
int main(void)
{
int a;
int b;
int c = 0;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
putchar(a);
putchar(b);
c++;

if (c <= 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
