#include "main.h"

/**
 * *_memset - fill first byte of the memory area printed
 * @s: char s
 * @b: char b
 * @n: n
 *
 * Return: 0.
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
