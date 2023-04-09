#include "main.h"
/**
* _strcmp - compares two strings.
* @s1 : string to compare
* @s2 : string to be compared
*
* Return: 0 or 1
*/
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 - *s2);
}
