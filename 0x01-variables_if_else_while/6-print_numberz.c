#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<math.h>

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
	int i = 0;

	while (i < 10)
	{
		putchar((i + '0'));
		i++;
	}
	putchar('\n');
	return (0);
}
