#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ascii = 97;

	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(ascii + i);
	}
	putchar('\n');

	return (0);
}
