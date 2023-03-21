#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int a, b, c;
int i;
a = 1;
b = 2;
printf("%lu, %lu", a, b);
for (i = 3; i <= 98; i++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
