#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_err - prints err msg and exits with status 98
 * @msg: err message to print
 */

void print_err(char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - prints ELF header info
 * @header: ptr to ELF header struct
 */

void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - NetBSD");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vec
 * Return: 0 or 98
 */

int main(int ac, char **av)
{
	int file_d;
	Elf64_Ehdr header;

	if (ac != 2)
	{
		print_err("Usage: elf_header elf_filename");
	}

	file_d = open(av[1], O_RDONLY);
	if (file_d == -1)
	{
		print_err("Error: Unable to open file");
	}

	if (read(file_d, &header, sizeof(header)) != sizeof(header))
	{
		print_err("Error: Unable to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_err("Error: Not an ELF file");
	}

	print_elf_header(&header);
	close(file_d);
	return 0;
}
