#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints a message to the standard error.
 *
 * Return: Always 1
*/

int main(void)
{
	char x = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, x, 59);
	return (1);
}
