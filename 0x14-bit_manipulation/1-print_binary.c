#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int pri_bi;

	for (i = 63; i >= 0; i--)
	{
		pri_bi = n >> i;

		if (pri_bi & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
