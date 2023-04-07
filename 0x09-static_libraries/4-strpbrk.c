#include "main.h"
/**
 *_strpbrk - finds the first character in the string
 * @s: input
 * @accept: input
 * return: s or '\0'
 */
char *_strpbrk(char *s, char *accept)
{
  int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
return ('\0');
}
