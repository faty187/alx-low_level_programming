#include "main.h"

/**
 * _strlen : returns a string lengh
 *
 * @*s : char input
 *
 * Returns : 0 ( success )
 */

int _strlen(char *s)
{
	int counter;
	for (counter = 0; *s != '\0'; *s++)
		++counter;
	return (counter);

}
