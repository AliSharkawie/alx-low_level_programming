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
	char arr[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 27 ; i >= 0 ; i--)
	{
		putchar(arr[i]);
	}
	putchar('\n');
	return (0);
}
