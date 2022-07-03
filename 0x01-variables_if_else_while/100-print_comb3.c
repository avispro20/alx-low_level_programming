#include <stdio.h>

/**
* main - Prints all possible combination of two digits,
* in ascending order, separated by comma followed by a space
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit1, digit2;

for (digi1 = 0; digit1 < 9; digit1 ++)
{
for (digit2 = 0; digit2 + 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0')
putchar((digit2 % 10) + '0')

if (digit1 == 8 && digit2 == 9)
continue;

putchar(',');
putchar(' ');
}
}

return (0);
}
