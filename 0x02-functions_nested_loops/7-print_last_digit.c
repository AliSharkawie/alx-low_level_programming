#include"main.h"

/**
 * print_last_digit - function for check
 * if charecter or not
 *
 * @x1: arguement to check
 *
 * Return: 0 if char is not character or 1 if it is
 *
*/

int print_last_digit(int x)
{
	if (x < 0)
	{
		printf("%d", (-1 * (x % 10)));
		return (-1 * (x % 10));
	}
	printf("%d", (x % 10));
	return (x % 10);
}
