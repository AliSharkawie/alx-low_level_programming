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
		j = 1;
		
		putchar('0');
		while (j <= 9)
		{
			putchar(',');
			putchar(' ');
			if (i * j < 10)
			{
				putchar(' ');
				putchar(((i * j) % 10) + '0');
			}
			else
			{
				putchar(((i * j) / 10) + '0');
				putchar(((i * j) % 10) + '0');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
