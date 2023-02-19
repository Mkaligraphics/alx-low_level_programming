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

for (one = 0; one <= 98; one++)
{
for (two = one + 1; two <= 99; two++)
{

putchar((one / 10) + '0');
putchar((one % 10) + '0');
putchar(' ');
putchar((two / 10) + '0');
putchar((two % 10) + '0');
if (one == 98 && two == 99)
continue;
putchar(',');
putchar(' ');

}
}
putchar('\n');

return (0);
}
