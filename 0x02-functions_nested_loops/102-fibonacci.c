#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int num1 = 1, num2 = 2, fib;
printf("%ld, %ld", num1, num2);
for (i = 2; i < 50; i++)
{
fib = num1 + num2;
printf(", %ld", fib);
num1 = num2;
num2 = fib;
}
printf("\n");
return (0);
}
