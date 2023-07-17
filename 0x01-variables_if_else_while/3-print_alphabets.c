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
	char arr[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0, I = 0;

	while (i < 28)
	{
		putchar(arr[i]);
		i++;
	}
	while (I < 28)
	{
		putchar(toupper(arr[I]));
		I++;
	}
	putchar('\n');
	return (0);
}
