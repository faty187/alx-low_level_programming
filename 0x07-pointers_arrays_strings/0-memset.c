#include "main.h"

/**
 * *_memset - function fills a memory with constant bytes
 *
 * @s : character
 * @b : integer
 * @n : insigned int
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
