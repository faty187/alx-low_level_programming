#include "main.h"

/**
 * print_line - print a line in terminal
 *		only _putchar to print
 *		- should be printed n times
 *
 * @n: input number
 *
 * Returns : 0 ( success )
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
