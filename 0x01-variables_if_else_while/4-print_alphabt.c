#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include <math.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: This is the main function that prints a message.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{

		if (x == 'q' || x == 'e')
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
