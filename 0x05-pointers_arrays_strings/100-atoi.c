#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1, num = 0, started = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
started = 1;
}
else if (started)
break;
s++;
}
return (num * sign);
}
