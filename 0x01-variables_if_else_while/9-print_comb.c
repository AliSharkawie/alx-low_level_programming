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
	for (int i = 0 ; i < 9 ; i++)
	{
		putchar((i + '0'));
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
