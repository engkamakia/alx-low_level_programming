#include "main.h"
/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: 0 if big endian and 1 if little endian.
 */
int get_endianness(void)
{
unsigned int a;
a = 1;

if ((a & 255) == 1)
return (1);
else
return (0);
}
