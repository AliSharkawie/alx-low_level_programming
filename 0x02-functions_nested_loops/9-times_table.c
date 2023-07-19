#include"main.h"

/**
 * times_table - function for check
 * if charecter or not
 *
 * descibtion: arguement to check
 *
 * Return:no return if char is not character or 1 if it is
 *
*/

void times_table(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (i * j >= 10)
			{
				printf("%3d", ((i * j) / 10));
				printf("%3d", ((i * j) % 10));
			}
			else
			{
				printf("%3d", ((i * j) % 10));
			}
			if (j == 9)
			{
				j++;
				continue;
			}
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
