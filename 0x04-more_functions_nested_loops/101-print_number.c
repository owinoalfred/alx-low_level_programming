#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 */
int main(void)
{
unsigned long int number = 612852475143;
unsigned long int factor = 2;
unsigned long int largest_factor = 2;
while (number > 1)
{
if (number % factor == 0)
{
largest_factor = factor;
number /= factor;
}
else
{
factor++;
}
}
printf("%lu\n", largest_factor);
return (0);
}
