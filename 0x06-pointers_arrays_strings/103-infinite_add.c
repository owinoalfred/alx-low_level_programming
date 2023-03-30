#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, len, carry, i, j;
for (len1 = 0; n1[len1]; len1++)
;
for (len2 = 0; n2[len2]; len2++)
;
if (len1 >= size_r || len2 >= size_r)
return (0);
carry = 0;
for (i = len1 - 1, j = len2 - 1, len = 0; len1 > 0 || len2 > 0; i--, j--, len++)
{
if (len1 > 0)
carry += n1[i] - '0';
if (len2 > 0)
carry += n2[j] - '0';
if (len >= size_r)
return (0);
r[len] = carry % 10 + '0';
carry /= 10;
len1--;
len2--;
}
if (carry && len >= size_r)
return (0);
if (carry)
r[len++] = carry + '0';
if (len >= size_r)
return (0);
r[len] = '\0';
for (i = 0, j = len - 1; i < j; i++, j--)
{
char tmp = r[i];
r[i] = r[j];
r[j] = tmp;
}
return (r);
}
