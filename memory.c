#include "shell.h"

/**
 * bfree - Unchains a pointer and NULLs the address
 * @ptr: The address of the pointer to unchain
 *
 * Return: 1 for unchained, or else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
