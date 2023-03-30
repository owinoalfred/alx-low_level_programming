include "main.h";

/**
*infinite_add - adds two numbers stored as strings
*@n1: first number to add
*@n2: second number to add
*@r: buffer to store the result
*@size_r: size of the buffer
*Return: pointer to the result or 0 if the result cannot be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i, j;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[i + 1] = sum % 10 + '0';
}
if (carry)
{
if (len1 + 1 < size_r)
r[0] = carry + '0';
else
return (0);
}
return (r);
}
