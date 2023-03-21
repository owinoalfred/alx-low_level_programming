#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, fib3;
int i;
printf("%lu, %lu", fib1, fib2);
for (i = 3; i <= 98; i++)
{
fib3 = fib1 + fib2;
printf(", %lu", fib3);
fib1 = fib2;
fib2 = fib3;
}
printf("\n");
return (0);
}
