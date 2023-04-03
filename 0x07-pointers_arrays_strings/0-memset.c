#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address 
 * @b: desired value
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
  int i = 0;
  for (; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
