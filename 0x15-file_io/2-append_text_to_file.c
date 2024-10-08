#include "main.h"
/**
 * append_text_to_file - A function that appends text
 * at the end of a file.
 * @filename: The name of a file to append content.
 * @text_content: The content to be appended to a file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int nl;
int rwr;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
for (nl = 0; text_content[nl]; nl++)
rwr = write(fd, text_content, nl);
if (rwr == -1)
return (-1);
}
close(fd);
return (1);
}
