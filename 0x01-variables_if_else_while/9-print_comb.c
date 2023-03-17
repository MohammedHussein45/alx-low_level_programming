#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
if (i != 57)
{
putchar(',');
putchar(' ');
}
return (0);
}
