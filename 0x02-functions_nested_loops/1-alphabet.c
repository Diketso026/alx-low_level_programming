#include "main.h"

/* header comes here */

/**
 * prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
