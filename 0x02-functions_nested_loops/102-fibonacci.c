#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, i, t1 = 1, t2 = 2, nextTerm;
printf("First 50 Fibonacci numbers: ");
for (i = 1; i <= 50; i++)
{
printf("%d", t1);
if (i < 50)
{
printf(", ");
}
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
printf("\n");
return 0;
}
