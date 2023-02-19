#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{

int one, two;

for (one = '0'; one < '9'; one++)
{
for (two = one + 1; two <= '9'; two++)
{

if (two != one)
{
putchar(one);
putchar(two);
if (one == '8' && two == '9')
	continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
