#include <stdio.h>

/**
* main - Prints all possible combination of two two-digit numbers,
* ranging from 0-99, seoarated by a comma followed by a space.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <=99; numb2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 == 98 && num2 == 99)
continue;

putchar(',');
putchar(' ');
}
}

Putchar('\n');

return (0);
}
