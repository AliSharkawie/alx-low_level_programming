#include"main.h"

/**
 * main - Entry point
 *
 * Description: This is the main function that prints a message.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char arr = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(arr[i]);
		_putchar('\n');
	}
	return (0);
}
