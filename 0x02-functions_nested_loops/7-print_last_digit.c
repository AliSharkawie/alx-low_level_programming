#include"main.h"

/**
 * print_last_digit - function for check
 * if charecter or not
 *
 * @x: arguement to check
 *
 * Return: 0 if char is not character or 1 if it is
 *
*/

int print_last_digit(int x)
{
	if (x < 0)
	{
		x = -1 * x;
		_putchar((x % 10) + '0');
		return (x % 10);
	}
	_putchar((x % 10) + '0');
	return (x % 10);
}
