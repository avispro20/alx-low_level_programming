#include <stdio.h>
/**
* main - Print all the numbers of base 16 in lowercase.
*
* Return: ALways 0 (Success)
*/

int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num; num++)
putchar((num % 10) + '0');

for (letter = 'a'; letter <='f'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
