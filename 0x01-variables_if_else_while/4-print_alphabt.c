#include <stdlib.h>
#include <stdio.h>

/* header comes here*/

/**
 * main - Entry point
 *
 * Print all the letters except q and e
 *
 * Return: Always 0 (Success)i
 */

int main(void)
{
	int ascii = 97;

	int i;

	for (i = 0; i < 26 ; i++)
	{
		if (i != 16)
		{
			if (i != 4)
			{
				putchar(ascii + i);
			}
		}
	}
	putchar('\n');

	return (0);
}
