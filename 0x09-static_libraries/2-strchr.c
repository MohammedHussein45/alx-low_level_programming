#include "main.h"
/**
 * _strchr - check if a letter is in an array
 * @s: input
 * @c: input
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
