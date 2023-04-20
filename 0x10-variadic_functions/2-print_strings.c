#include "variadic_functions.h"

/**
 * print_strings - function that Prints strings into it separated by separators
 * @separator: A string used to separate strings
 * @n: number of arguments
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}