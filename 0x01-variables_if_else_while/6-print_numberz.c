#include <stdlib.h>
#include <stdio.h>
/* header comes here */

/**
 * main - Entry point
 *
 * prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ascii = 48;

	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(ascii + i);
	}
	putchar('\n');

	return (0);
}
