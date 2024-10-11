#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * file_from_to - A function that checks if a file is opened
 * and handle errors.
 * @file_from: A file to copy from to chech.
 * @file_to: A destination to copy a file.
 * @argv: argument vector.
 *
 * Return: No return.
 */
void file_from_to(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Erro: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Erro: Cant't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - A function that copy content of a file from ont to another.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t num_chars, nwr;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_from_to(file_from, file_to, argv);
num_chars = 1024;
while (num_chars == 1024)
{
num_chars = read(file_from, buffer, 1024);
if (num_chars == -1)
file_from_to(-1, 0, argv);
nwr = write(file_to, buffer, num_chars);
if (nwr == -1)
file_from_to(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close ft %d\n", file_to);
exit(100);
}
return (0);
}
