#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *str, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)

			return (&str[i]);
	}
	return (0);
}
