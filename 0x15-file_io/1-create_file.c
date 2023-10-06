#include "main.h"
/**
 * create_file -A function that creates a file.
 * @filename: filename.
 * @text_content: contents of the file.
 *
 * Return: 1 if it successful and -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int f_desc, info, i = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[i] != '\0')
{
i++;
}
}
f_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (f_desc < 0)
return (-1);

info = write(f_desc, text_content, i);
if (info < 0)
return (-1);

close(f_desc);
return (1);
}
