#include <limits.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: the string to convert
 *
 * Return: the integer value represented by the string, or 0 if no number is found
 */
int _atoi(char *s)
{
    int sign = 1, digit, result = 0;
    while (*s != '\0')
    {
        if (*s == '-')
            sign *= -1;
        if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';
            result = result * 10 + sign * digit;
            if (result > 0 && sign < 0)
                return INT_MIN;
            else if (result < 0 && sign > 0)
                return INT_MAX;
        }
        else if (result != 0)
            break;
        s++;
    }
    return result;
}
