#include <stdio.h>
#include "main.h"
/**
 *set_bit - the bit at the specified index of the unsigned long
 *@index: If the index is out of range.
 *@n:pointer to the number to change
 *
 * Return: return 1 to indicate success and -1 to indicate failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	{
	return (1);
	}
}
