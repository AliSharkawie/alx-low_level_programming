#include"main.h"

/**
 * print_alphabet_x10 -  This is the print_alphabet function
 * that prints a message.
 * diescribtion  - slkjfkdlnn lkjl
 * Return : no return value  (Success)
 *
*/

void print_alphabet_x10(void)
{
	int i = 10;

	while (i--)
	{
		char x = 'a';

		while (x < 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}
}
