#include <stdio.h>
#include "main.h"


/**
 * err_check - A function that checks if files can be opened.
 * @from: file_from.
 * @to: file_to.
 * @argv: arguments vector.
 * Return: function has no return.
 */
void err_check(int from, int to, char *argv[])
{
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
}

/**
 * main - main function that copies the contents of a file to another file.
 * @argc: number of arguments to the function.
 * @argv: arguments vector of main function.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
int from, to, close_err;
ssize_t n, r;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

from = open(argv[1], O_RDONLY);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
err_check(from, to, argv);

n = 1024;
while (n == 1024)
{
n = read(from, buffer, 1024);
if (n == -1)
err_check(-1, 0, argv);
r = write(to, buffer, n);
if (r == -1)
err_check(0, -1, argv);
}

close_err = close(from);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
exit(100);
}

close_err = close(to);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
exit(100);
}
return (0);
}
