#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *msg, ...) {
    va_list args;
    va_start(args, msg);

    dprintf(STDERR_FILENO, msg, args);

    va_end(args);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, n_read, n_write;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit(99, "Error: Can't write to %s\n", argv[2]);

    do {
        n_read = read(fd_from, buffer, BUFFER_SIZE);
        if (n_read == -1)
            error_exit(98, "Error: Can't read from file %s\n", argv[1]);

        n_write = write(fd_to, buffer, n_read);
        if (n_write == -1)
            error_exit(99, "Error: Can't write to %s\n", argv[2]);

    } while (n_read > 0);

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_to);

    return 0;
}

