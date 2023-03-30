#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The string to append to
 * @src: The string to append
 *
 * Return: Pointer n
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
