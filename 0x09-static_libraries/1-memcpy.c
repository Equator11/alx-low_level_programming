#include "main.h"

/**
 * *_memcpy - fills the first byte of the memory area printed
 * @dest: pointer to char dest
 * @src: pointer to char src
 * @n: unsigned int n
 *
 * Retrurn: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;

	}
	return (dest);

}
