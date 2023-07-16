#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function that prints a message.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, x, strlen(x));
	return (1);
}
