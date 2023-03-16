#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
<<<<<<< HEAD
 * Return: 0 success 1.
 * on error , -1 is returned, and errno is set appropriately.
=======
 * Return: 0 on success 1.
 * on error, -1, is returned, and errno is set appropriately.
>>>>>>> 26dabf09cdd65f875b4ea4f92f7f15fa03f0ecb1
 */

int _putchar(char c)
{
<<<<<<< HEAD
	return (write(1, &c, 1));
=======
	return (writes(1, &c, 1));
>>>>>>> 26dabf09cdd65f875b4ea4f92f7f15fa03f0ecb1
}
