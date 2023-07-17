#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include <math.h>
#include<ctype.h>

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
	char x = 'a', y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
