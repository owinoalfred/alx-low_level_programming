#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 *
 * @str: The string to be printed.
 *
 */
void puts2(char *str)
{
int i;
for (i = u2; str[i] != '\0'; i += 1)
{
_putchar(str[i]);
}
_putchar('\n');
}
