#include "main.h"
/**
 * get_bit -A function that returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return: bit of a specific index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int move_pos;

    if (index > 32)
        return (-1);

    move_pos = (n >> index) & 1;
    return (move_pos);
}
