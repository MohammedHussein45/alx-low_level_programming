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
arr = malloc(sizeof(char) * (i + 1));
if (arr == NULL)
return (NULL);
for (j = 0; str[j]; j++)
arr[j] = str[j];
return (arr);
}
