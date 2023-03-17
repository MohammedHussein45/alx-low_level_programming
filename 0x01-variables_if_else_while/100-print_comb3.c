#include <stdio.h>
/**
* main - A program that prints a line with puts function
* Return: 0 (Success)
*/
int main(void)
{
int i, m;
for (i = 48; i <= 56; i++)
{
for (m = 49; m <= 57; m++)
{
if (i > m)
{
putchar(i);
putchar(m);
if (i != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
}
