#include "main.h"

/**
 * _isdigit - check for digit
 *
 * @c: integer
 *
 * Return: 1 if it is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
