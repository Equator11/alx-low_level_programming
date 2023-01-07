#include <stdio.h>

/**
 * main - Prints nummber
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
/* to suppresse unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
