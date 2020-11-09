#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main - Program that copies the content of a file into another file
 *@argv: input arguments
 *@argc: quantity of arguments
 *Return: nothing
 */

int main(int argc, char *argv[])
{

int fd_source, fd_dest, fd_write, fd_read;
char buff[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

fd_source = open(argv[1], O_RDONLY);
if (fd_source == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_dest == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]), exit(99);

fd_read = fd_write = 1;

while (fd_read)
{
fd_read = read(fd_source, buff, 1024);
if (fd_read == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (fd_read > 0)
fd_write = write(fd_dest, buff, fd_read);
if (fd_write == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]), exit(99);
}

fd_write = close(fd_source);
if (fd_write == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source), exit(100);

fd_write = close(fd_dest);
if (fd_write == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);

return (0);
}
