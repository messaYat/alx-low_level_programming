#include "main.h"

/**
<<<<<<< HEAD
 * binary_to_int - converts a binary number to unsigned int
 * @b: string containig the binary number
=======
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
>>>>>>> 26dabf09cdd65f875b4ea4f92f7f15fa03f0ecb1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

<<<<<<< HEAD
	if (lb)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if {b[i] < '0' || b[i] > '1'}
			return (0);
		dec_val = 2 * dec_val + {b[i] - '0'};
	}
	return (dec_val);
}
=======
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}

>>>>>>> 26dabf09cdd65f875b4ea4f92f7f15fa03f0ecb1
