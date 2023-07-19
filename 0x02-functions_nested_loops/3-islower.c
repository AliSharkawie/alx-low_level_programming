#include"main.h"

/**
 * _islower - function for check
 * if charecter is lower or upper
 *
 * @c: arguement to check
 *
 * Return: 0 if char is uppercase or 1 if lower
 *
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
