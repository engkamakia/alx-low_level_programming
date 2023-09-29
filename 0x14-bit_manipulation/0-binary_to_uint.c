#include "main.h"
/**
* binary_to_uint - A function that converts a binary into an int.
* @b: a pointer pointing to a string of 0 and 1 chars.
* Return: converted binary number or 0.
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int j = 0;

if (!b)
return (0);

while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
return (0);

j = j * 2 + (b[i] - '0');
i++;
}
return (j);
}
