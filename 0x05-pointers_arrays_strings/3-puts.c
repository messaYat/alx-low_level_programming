#include "main.h"
/**
 *_puts - prints a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void _puts(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = i - 1 ; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
