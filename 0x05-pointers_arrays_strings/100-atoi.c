#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int started = 0;
while (*s != '\0')
{
if (*s == '-' || *s == '+') {
sign = (*s == '-') ? -1 : 1;
} 
else if (*s >= '0' && *s <= '9') {
started = 1;
int digit = *s - '0';
if (num == INT_MIN / 10 && digit > 8 && sign == -1)
{
return INT_MIN;
}
num = num * 10 - digit;
if (num > 0)
{
return (sign == -1) ? INT_MIN : INT_MAX;
}
}
else if (started) {
break;
}
s++;
}
return (sign *num);
}
