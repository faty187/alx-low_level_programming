#include "main.h"

/**
 * print_numbers - print 0 to 9
 *              only using _putchar twice
 *              Don't print number 2
 *              Don't print number 4
 *Returns : always 0 ( success )
 */
void print_numbers(void)
{
	for (i = 0; i < 9;  i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
