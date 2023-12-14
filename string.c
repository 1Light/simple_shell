#include "shell.h"

/**
 * _strlen - Gives back the length of the string
 * @s: The string considered
 *
 * Return: The integer length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - It performs lexicogarphic comparison of the two strings.
 * @s1: String number 1
 * @s2: String number 2
 *
 * Return: less than 0 if s1 < s2, greater than 0 if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - Checks if the needle starts with haystack
 * @haystack: The looked for string
 * @needle: The looked for substring
 *
 * Return: The address of the next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Joins the two strings
 * @dest: The final buffer
 * @src: The supply buffer
 *
 * Return: The pointer to the final buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
