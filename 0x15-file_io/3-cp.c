#include "main.h"

int cp(const char *file_from, const char *file_to)
{
    int fd_from, fd_to;
    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    if (file_from == NULL || file_to == NULL)
        return (97);

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (98);
    }

    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        close(fd_from);
        return (99);
    }

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            close(fd_from);
            close(fd_to);
            return (99);
        }
    }

    close(fd_from);
    close(fd_to);

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (98);
    }

    return (0);
}

