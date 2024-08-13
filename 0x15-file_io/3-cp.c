#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * file_from_to - A function that checks if a file is opened
 * and handle errors.
 * @file_from: A file to copy from to chech.
 * @file_to: A destination to copy a file.
 *
 * Return: No return.
 */
void file_from_to(int file_f, int file_t, char *argv[])
{
if (file_f == -1)
{
dprintf(STDERR_FILENO, "Erro: Cant't read from file %s\n", argv[1]);
exit(98);
}
if (file_t == -1)
{
dprintf(STDERR_FILENO, "Erro: Cant't write to file %s\n", argv[2]);
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
int file_f, file_t, err_close;
ssize_t num_chars, nwr;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_f file_t\n");
exit(97);
}
file_f = open(argv[1], O_RDONLY);
file_t = open(argv[2], O_CREAT |O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_from_to(file_f, file_t, argv);
num_chars = 1024;
while (num_chars == 1024)
{
num_chars = read(file_f, buffer, 1024);
if (num_chars == -1)
file_from_to(-1, 0, argv);
nwr = write(file_t, buffer, num_chars);
if (nwr == -1)
file_from_to(0, -1, argv);
}
err_close = close(file_f);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
exit(100);
}
err_close = close(file_t);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close ft %d\n", file_t);
exit(100);
}
return (0);
}
