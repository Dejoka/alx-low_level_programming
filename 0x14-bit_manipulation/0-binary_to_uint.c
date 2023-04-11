#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more char
 */
unsigned int binary_to_uint(const char *b)
{

	int i;
	unsigned int res_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res_val = 2 * res_val + (b[i] - '0');
	}

	return (res_val);
}

