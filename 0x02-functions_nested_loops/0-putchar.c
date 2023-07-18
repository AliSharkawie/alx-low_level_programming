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
	char arr[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(arr[i]);
		_putchar('\n');
		i++;
	}
	return (0);
}
