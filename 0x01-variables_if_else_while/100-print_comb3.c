#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints a message.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			if (i == j)
			{
				j++;
				continue;
			}
			putchar((i + '0'));
			putchar((j + '0'));
			if ((i != 9 || j != 9) && !(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
