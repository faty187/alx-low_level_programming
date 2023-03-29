#include <unisted.h>
#include "main.h"

/**
 * _putchar - writes the charachter c to stdout
 * @c: the charachter to print
 *
 * Return:On success 1.
 *        On error. -1 is returned . and errno is set appropiately
 */
int _putchar(char c)
{
        return (write(1, &c, 1);
}
