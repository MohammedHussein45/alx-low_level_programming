#include "main.h"
#include "stdio.h"
/**
 * rot13 - encoder rot13
 *Return: *s
 */
char *rot13(char *)
{
	int i;
	int j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char k[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == l[j])
				s[i] == k[j];
		}
	}
	return (s);
}
