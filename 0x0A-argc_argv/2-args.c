#include <studio.h>
#include "main.h"

/**
 * main - Printall arguments it recieves
 * @argc: number of arguments
 * @argv: Arra of Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
		
	}
	return (0);
}
