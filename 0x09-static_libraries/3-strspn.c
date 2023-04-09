#include "main.h"
/**
 * _strspn - Returns a pointer to the first occurrence of a character
 * @s : string to find in
 * @accept : character to be found
 *
 * Return: a string
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, tempo;
tempo = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
tempo++;
break;
}
}
if (accept[j] != s[i])
{
break;
}
}
return (tempo);
}
