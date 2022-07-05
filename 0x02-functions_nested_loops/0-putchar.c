#include "main.h"

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{

char joy[9] = "_putchar";
int i;

for (i = 0; i < 8; i = i + 1)
{
_putchar(joy[i]);
}
_putchar('\n');
return (0);
}	
