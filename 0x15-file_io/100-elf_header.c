#include <stdio.h>

/**
 * main - The entry point for program to get header of ELF file
 * @argc: The nuber of arguments
 * @argv: The pointer to array of arguments
 * REturn: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
