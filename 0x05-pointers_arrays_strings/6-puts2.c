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
for (i = 0; str[i] != '\0'; i++ )
{
if (i%2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
