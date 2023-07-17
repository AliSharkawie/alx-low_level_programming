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
	int i = 0, j = 0, k = 0;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				if (i == j && i == k)
				{
					k++;
					continue;
				}
				putchar((i + '0'));
				putchar((j + '0'));
				putchar((k + '0'));
				if ((i != 9 || j != 9 || k != 9) && !(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
