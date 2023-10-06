#include "main.h"
/**
 * read_textfile -A function that reads a text file and prints the letters.
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f_desc, info, output;
char *buffer;

if (filename == NULL)
return (0);

f_desc = open(filename, O_RDONLY);
if (f_desc < 0)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

info = read(f_desc, buffer, letters);
if (info < 0)
{
free(buffer);
close(f_desc);
return (0);
}
buffer[info] = '\0';

output = write(STDOUT_FILENO, buffer, info);
if (output < 0)
{
free(buffer);
close(f_desc);
return (0);
}

free(buffer);
close(f_desc);

return (output);
}
