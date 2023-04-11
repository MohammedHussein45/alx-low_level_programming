#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str : char
* Return: NULL or array
*/
char *_strdup(char *str)
{
char *arr;
int i, j = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
arr = malloc(sizeofsize(char) * (i + 1))
if (arr == NULL)
return (NULL);
for (r = 0; str[r]; r++)
arr[r] = str[r];
return (arr);
}
