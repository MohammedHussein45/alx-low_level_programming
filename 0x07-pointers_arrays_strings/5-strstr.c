#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *j = needle;

		while (*p == *j && *j != '\0')
		{
			p++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
