#include <stdio.h>
#include <ctype.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i = 'A';
int y = 'a';
for (; y <= 'Z'; y++)
{
putchar(tolower(y));
}
for (; i <= 'Z'; i++)
putchar(toupper(i));
printf("\n");
return (0);
}
