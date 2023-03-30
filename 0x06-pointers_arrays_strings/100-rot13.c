#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
char *p = s;
int i;
while (*p)
{
if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
*p += 13;
else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
*p -= 13;
p++;
}
return (s);
}
