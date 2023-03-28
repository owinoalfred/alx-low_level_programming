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
for (i = 1; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
