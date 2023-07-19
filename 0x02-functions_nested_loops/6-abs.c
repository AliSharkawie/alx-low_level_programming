#include"main.h"

/**
 * _abs - function for check
 * if charecter or not
 *
 * @x: arguement to check
 *
 * Return: 0 if char is not character or 1 if it is
 *
*/

int _abs(int x)
{
	if (x == abs(x))
		return (1);
	else
		return (0);
}
