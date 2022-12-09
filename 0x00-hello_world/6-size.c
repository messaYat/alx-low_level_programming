#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by bwave ict
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	print("size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	print("size of a long int: %lu byte(S)\n", (unsigned long int)sizeof(c));
	print("size of a long long int: byte(S)\n", (unsigned long int)sizeof(d));
	print("size of a float: byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
