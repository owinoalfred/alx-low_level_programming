#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The string to append to
 * @src: The string to append
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*temp)
        temp++;

    while (*src)
    {
        *temp = *src;
        temp++;
        src++;
    }

    *temp = '\0';

    return dest;
}
