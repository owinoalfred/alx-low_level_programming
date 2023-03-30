#include "main.h"
/**
 * rot13 - encodes a string using rot13
 *
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
char *p = s;
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (*p)
{
int i = 0;
while (alpha[i])
{
if (*p == alpha[i])
{
*p = rot13[i];
break;
}
i++;
}
p++;
}
return (s);
}
