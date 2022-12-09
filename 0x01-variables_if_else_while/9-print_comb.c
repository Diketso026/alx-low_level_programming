#include <stdlib.h>
#include <stdio.h>
/* header comes here */

/**
 * main - Entry point
 *
 *  prints all possible combinations of single-digit numbers
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
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
