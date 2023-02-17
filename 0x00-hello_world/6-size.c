#include <stdio.h>
/**
 * main - The parent function of the C program
 * Return: Gives you back the void 0 you gave it 
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
