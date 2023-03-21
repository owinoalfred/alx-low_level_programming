#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, separated by comma and space
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0.
 */
int main()
{
int i;
unsigned long fib1 = 1, fib2 = 2, fib3;
printf("%lu, %lu, ", fib1, fib2);
for (i = 2; i < 98; i++)
{
fib3 = fib1 + fib2;
printf("%lu", fib3);
if (i < 97)
{
printf(", ");
}
fib1 = fib2;
fib2 = fib3;
}
printf("\n");
return (0);
}
