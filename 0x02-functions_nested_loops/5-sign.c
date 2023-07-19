#include"main.h"

/**
 * print_sign - function for check
 * if charecter or not
 *
 * @n: arguement to check
 *
 * Return: ascii for  + or - or 0  if n is
 * sign or 1 if it is
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
