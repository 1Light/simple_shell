#include "shell.h"

/**
 **_memset - inputs adequate constant byte in memory
 *@s: The pointer to the memory
 *@b: The byte to fill the memory
 *@n: The number of bytes to fill the memory
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - Unlinks a string of strings
 * @pp: The string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - Repositions a block of memory
 * @ptr: The pointer to the previous malloc'ated block
 * @old_size: The size of byte size of previous block
 * @new_size: The size of the new block
 *
 * Return: The pointer to the old block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
