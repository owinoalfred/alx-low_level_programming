#include "main.h"

/**
 * _strchr - This function locates a charcater in a string.
 * @s: Represents the string where the search is carried out.
 * @c: The chararcter to look out for in 's'.
 *
 * Return: a pointer to the first occurence of the character
 * or a NULL if no character is matched.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)

			return (&s[i]);
	}
	return (0);
}
