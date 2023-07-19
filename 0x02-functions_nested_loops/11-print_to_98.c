#include"main.h"

/**
 * print_to_98 - function for check
 * if charecter or not
 *
 * @n : par1 to check
 *
 * Return: return sum  char is not character or 1 if it is
 *
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			printf(", ");
			n++;
		}
	}
	putchar('\n');
}
