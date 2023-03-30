#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer where the result is stored
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, i, j, k, carry = 0;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 + len2 + 1 > size_r)
return (0);
for (i = len1 - 1, j = len2 - 1, k = 0; k < size_r - 1 && (i >= 0 || j >= 0); i--, j--, k++)
{
int sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
r[k] = (sum % 10) + '0';
carry = sum / 10;
}
if (carry)
{
if (k >= size_r - 1)
return (0);
r[k++] = carry + '0';
}
r[k] = '\0';
for (i = 0, j = k - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
return (r);
}
