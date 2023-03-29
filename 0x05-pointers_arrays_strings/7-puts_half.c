#include "main.h"

/**
 * puts_half - function print half of a string
 *		followed by new line
 *
 * @str : parametr
 *
 * Returns : 0 ( success)
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
