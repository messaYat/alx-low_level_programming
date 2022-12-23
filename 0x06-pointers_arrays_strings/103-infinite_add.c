#include "main.h"

/**
 * infinite_add - C function that adds two numbers stored
 * in string to a buffer
 * Assumes that strings are never empty and
 * that numbers will always be positive, or 0.
 * Assumes only there are only digits stored in the number strings.
 * If result can be stored in the buffer
 * returns a pointer to teh result.
 *if result can not be stored in the buffer, returs '0'.
 *@n1: first number to be add
 *@n2: second number to be added
 *@r: store result
 *@size_r: size of buffer
 *Return: return pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - Adds teh number storedin two strings.
 * @n1: The string containing the first number to be added.
 * @n2: the string containing the second number to be added.
 * @r: the buffer to store result
 * @r_index: the current index of the buffer.
 *
 *Return: if r can store the sum - a pointer to the result.
 *	if r can not store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_index)
{
	int num, tens = 0;

	for (; *n1 && *n2 n1--, r_index--)
	{
		num = (*num1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	if (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
