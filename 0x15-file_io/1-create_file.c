#include "main.h"
/**
 * create_file - A function that create a file.
 * @filename: The filename to be created.
 * @text_content: The content to be copieed into the file.
 *
 * Return: 1 If successful otherwise -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int nl;
int rwr;
if(!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if(fd == -1)
return (-1);
if(text_content == NULL)
text_content = " ";
for (nl = 0; text_content[nl]; nl++)
;
rwr = write(fd, text_content, nl);
if (rwr == -1)
return (-1);
close(fd);
return (1);
}
