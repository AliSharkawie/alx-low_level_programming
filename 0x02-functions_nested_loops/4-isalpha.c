#include"main.h"

/**
 * _isalpha - function for check
 * if charecter or not
 *
 * @c: arguement to check
 *
 * Return: 0 if char is not character or 1 if it is
 *
*/

int _isalpha(int c)
{
	if (islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
