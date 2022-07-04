#include <stdio.h>

/**
* main - prnts all possible combninations of single-digit numbers
*
* Return: Always 0 (Success)
*/

int num(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
continue;

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
