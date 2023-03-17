#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i;
for (i = '0'; i < '9'; i++)
{
putchar(i);
}
for (i = 'a'; i < 'g'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
