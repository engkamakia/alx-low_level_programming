#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: filename.
 * @text_content: content added to file.
 *
 * Return: 1 if the file exists and -1 if the fails does not exist or fails.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
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
f_desc = open(filename, O_WRONLY | O_APPEND);
if (f_desc < 0)
return (-1);

info = write(f_desc, text_content, i);
if (info < 0)
return (-1);

close(f_desc);
return (1);
}
