#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 2, c, count;
printf("%d, %d, ", a, b);
for (count = 3; count <= 98; count++)
{
c = a + b;
printf("%d", c);
if (count != 98)
{
printf(", ");
}
a = b;
b = c;
}
printf("\n");
return 0;
}
