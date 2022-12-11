#include <stdio.h>

/**
 * main - print out sizes of data types in C
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	print("size of a char: %lu byte(s)\n", sizeof(char));
	print("size of an int: %lu byte(s)\n", sizeof(int));
	print("size of a long int: %lu byte(s)\n", sizeof(long int));
	print("size of a long long int: byte(s)\n", sizeof(long long int));
	print("size of a float: byte(s)\n", sizeof(float));
	return (0);
}
