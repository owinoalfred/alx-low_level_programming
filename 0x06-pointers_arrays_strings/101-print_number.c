#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
int i, j, k, digit, digits, tmp;
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
tmp = n;
digits = 0;
while (tmp > 0)
{
digits++;
tmp /= 10;
}
for (i = digits - 1; i >= 0; i--)
{
digit = n;
for (j = 0; j < i; j++)
digit /= 10;
digit %= 10;
for (k = 1; k < i + 1; k++)
digit *= 10;
_putchar(digit + '0');
}
}
