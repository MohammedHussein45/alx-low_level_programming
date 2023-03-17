#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i, m, n;
for (i = 48; i <= 58; i++)
{
for (m = 49; m <= 58; m++)
{
for (n = 50; n <= 58; n++)
{
if (m > i && n > m)
{
putchar(i);
putchar(m);
putchar(n);
if (i != 55 || m != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
