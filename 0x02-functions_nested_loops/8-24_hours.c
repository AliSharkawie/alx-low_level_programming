#include"main.h"

/**
 * jack_bauer - function for check
 * if charecter or not
 *
 * discribtion: arguement to check
 *
 * Return: void  0 if char is not character or 1 if it is
 *
*/

void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
