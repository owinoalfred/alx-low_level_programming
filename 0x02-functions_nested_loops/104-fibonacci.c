#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int fib[100];
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 100; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (i = 0; i < 98; i++)
{
printf("%ld, ", fib[i]);
}
printf("%ld\n", fib[98]);
return (0);
}
