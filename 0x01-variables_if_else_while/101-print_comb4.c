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

int one, two, three;

for (one = '0'; one < '9'; one++)
{
for (two = one + 1; two <= '9'; two++)
{

for (three = two + 1; three <= '9'; three++)
{

if ((two != one) != three)
{
putchar(one);
putchar(two);
putchar(three);
if (one == '7' && two == '8')
	continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
