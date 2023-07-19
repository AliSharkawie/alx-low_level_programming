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

int print_last_digit(int x1)
{
	long int x = x1;

	if (x < 0)
	{
		x = -1 * x;
		printf("%ld", (x % 10));
		return ((int)(x % 10));
	}
	printf("%ld", (x % 10));
	return ((int)(x % 10));
}
