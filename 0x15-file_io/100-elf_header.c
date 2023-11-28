#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include <string.h>

void error_exit(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

/**
 * print_magic - Prints the ELF magic number.
 * @e_ident: ELF identification array.
 */
void print_magic(unsigned char e_ident[])
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');
}

/**
 * print_elf_header - Prints the ELF header information.
 * @header: ELF header structure.
 */
void print_elf_header(Elf64_Ehdr header)
{
    printf("  Class:                             %s\n",
           header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n",
           header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           (header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding"));
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n",
           header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
           (header.e_ident[EI_OSABI] == ELFOSABI_NETBSD ? "UNIX - NetBSD" :
            (header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" : "<unknown>")));
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n",
           header.e_type == ET_EXEC ? "EXEC (Executable file)" :
           (header.e_type == ET_DYN ? "DYN (Shared object file)" :
            (header.e_type == ET_REL ? "REL (Relocatable file)" : "<unknown>")));
    printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);
}

/**
 * main - Displays the information contained in the ELF header of a file.
 * @ac: The number of arguments.
 * @av: The arguments.
 * Return: 0 on success, exit code on failure.
 */
int main(int ac, char **av)
{
    int fd;
    ssize_t n_read;
    Elf64_Ehdr header;

    if (ac != 2)
        error_exit("Usage: elf_header elf_filename");

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        error_exit("Error: Couldn't open the file");

    n_read = read(fd, &header, sizeof(header));
    if (n_read == -1)
        error_exit("Error: Couldn't read from file");

    if (n_read != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
        error_exit("Error: Not an ELF file");

    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_elf_header(header);

    close(fd);
    return 0;
}

