#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

putchar('\0');

return (0);
}
