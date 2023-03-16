#include "main.h"
#include <unistd.h>
/**
<<<<<<< HEAD
 * _putchar -writes the charater c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error , -1 is returned, and erreno is set appropriately.
>>>>>>> ba5014f3de61405d322cfa53c76a5df85ae6e113
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
<<<<<<< HEAD
=======

>>>>>>> ba5014f3de61405d322cfa53c76a5df85ae6e113
