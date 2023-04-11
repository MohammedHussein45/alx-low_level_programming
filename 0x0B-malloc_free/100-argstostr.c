#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, x = 0, z = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			z++;
	}
	z += ac;

	arr = malloc(sizeof(char) * z + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		arr[r] = av[i][j];
		x++;
	}
	if (arr[x] == '\0')
	{
		arr[x++] = '\n';
	}
	}
	return (arr);
}
