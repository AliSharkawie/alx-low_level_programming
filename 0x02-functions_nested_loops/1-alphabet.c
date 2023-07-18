#include"main.h"

/**
 * print_alphabet -  This is the print_alphabet function that prints a message.
 * Return : no return value  (Success)
 *
*/

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
