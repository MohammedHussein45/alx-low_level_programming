#include "main.h"
/**
 * _strspn - the length of the initial substring of the string
 * @s : input
 * @accept : input
 * return: counter
 */
unsigned int _strspn(char *s, char *accept)
{
  	unsigned int counter = 0;
	int i;


	while (*s)
	{
		for (i = 0; accept[i]; r++)
		{
			if (*s == accept[r])
			{
				counter++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (counter);
		}
		s++;
	}
	return (counter);
}
