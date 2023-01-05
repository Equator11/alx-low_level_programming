#include "main.h"
/**
 * _strlen_recursion - finding the string length
 * @s: pointer to string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
