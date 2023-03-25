#include "main.h"

/**
 * more_numbers - print 10 times
 *		from 0 to 14
 *		followed by a new line
 *		using _putchar only 3 times
 *
 * Returns : 1 on success
 */
void more_numbers(void);
{
	int i, rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
