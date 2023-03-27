#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 *
 * @str: The string to be printed.
 *
 */
void puts_half(char *str)
{
int len = 0, i;
while (str[len])
len++;
if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;
for (; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
}
