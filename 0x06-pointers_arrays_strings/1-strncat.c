#include "main.h"
/**
 * _strncat - Entry Point
 * @dest : destination array of string
 * @src : source array of string
 * @n : size of source to be concatenated
 * Return:character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
