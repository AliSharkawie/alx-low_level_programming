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
	char arr[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0 ; i < 28 ; i++)
	{
		if (arr[i] == 'q' || arr[i] == 'e')
			continue;
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
