#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	  {
	    sum1 = sum1 + a[(size + 1) * i];
	  }
	for (i = 1; i <= size; i++)
	  {
	    sum2 = sum2 + a[(size - 1) * i];
	  }
	printf("%d, %d\n", sum1, sum2);
}
