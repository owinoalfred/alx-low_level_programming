#include "main.h"
/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 *
 * @dest: Destination string to append to
 * @src: Source string to append from
 * @n: Maximum number of bytes to append from src
 *
 * Return: Pointer to the resulting string dest
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
