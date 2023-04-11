#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars,initializes it with a specific char
 * @size : size of array
 * @c : char to put in array
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

arr = malloc(sizeof(char) * size);
if (size == 0 || arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
