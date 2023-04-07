#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: the array 
 * @b: the value
 * @n: number of bytes to move
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
