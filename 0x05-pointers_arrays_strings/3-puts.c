#include "main.h"

/**
 * _puts : function that print a string followed by a new line
 *		to stdout
 *
 * str : parametr
 * returns 0: success
 */
void _puts(char *str);
{
	while (*str != '\0')
	{

			_putchar(*str + 0);
			str++;

	}
	_putchar('\n');

}
