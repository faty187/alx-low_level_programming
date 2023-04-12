#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 *
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 *
 * Return: If size is zero or if memory allocation fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	arr[0] = c;
	for (unsigned int i = 1; i < size; i++)
	{
		arr[i] = '\0';
	}
	return (arr);
}
/*
 * main - function to Create an array of chars,
 * and initializes it with a specific char
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Returns: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <size> <character>\n", argv[0]);
		return (1);
	}

	int size = atoi(argv[1]);

	char c = argv[2][0];

	char *arr = create_array(size, c);

	printf("%s\n", arr);
	free(arr);
	return (0);
}
