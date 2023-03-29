#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a : an integer input
 * @b : an integer input
 *
 * Returns : 0 ( success )
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
