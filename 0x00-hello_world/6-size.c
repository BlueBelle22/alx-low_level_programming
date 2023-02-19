#include <stdio.h>
/**
 * main - Write a C program that prints the size of various types on computer
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
