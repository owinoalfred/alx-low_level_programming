#include "main.h"

/**
 * print_times_table - prints the n times table, 
 * @n: the times table to print
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
_putchar('0');
else
{
int res = i * j;
_putchar(',');
_putchar(' ');
if (res < 10)
_putchar(' ');
else if (res < 100)
_putchar('0' + res / 10);
_putchar('0' + res % 10);
}
}
_putchar('\n');
}
}
