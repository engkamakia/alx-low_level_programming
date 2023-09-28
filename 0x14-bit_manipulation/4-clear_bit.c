#include "main.h"
/**
 * clear_bit -A function that sets the value of a bit to 0 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it works and -1 if it doesnt.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long m;

if (index > 32)
return (-1);

m = ~(1 << index);
*n &= m;
return (1);
}
