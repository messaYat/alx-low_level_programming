#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Descrpition: Write a program that prints all possible
 * combinations of three digits
 * Numbers must be separated by ,, followed by space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the thre
 * digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * All your code should be in the main function
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

