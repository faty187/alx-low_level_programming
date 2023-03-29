#include "main.h"

/**
 * puts2 - print every charachter of a string
 *
 * @str : parametr
 *
 * Returns : 0 ( success)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
