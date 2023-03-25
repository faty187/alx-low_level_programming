#include "main.h"

/**
 *_isupper - check if c is uppercase or not
 *@c: input for alphabet
 *if c is uppercase : returns 1
 *			otherwise : 0
 */
int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
