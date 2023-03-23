#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (j == i)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}
