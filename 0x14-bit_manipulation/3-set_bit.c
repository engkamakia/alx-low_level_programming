#include "main.h"
/**
 * set_bit -A function that sets the value of a bit to 1 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it works and -1 if it doesnt.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int m;

    if (index > 32)
        return (-1);

    m = 1UL << index;
    *n = (*n | m);
    return (1);
}
