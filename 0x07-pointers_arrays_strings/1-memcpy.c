#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source buffer.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
