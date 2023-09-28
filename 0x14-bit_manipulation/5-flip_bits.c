#include "main.h"
/**
 * flip_bits -A function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int counter = 0;
unsigned long int xor;

xor = n ^ m;
while (xor > 0)
{
if ((xor & 1) == 1)
counter++;
xor >>= 1;
}
return (counter);
}
