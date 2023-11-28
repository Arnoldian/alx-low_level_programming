#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>

/**
 * print_err - Print error message to stderr and exit with status code 98.
 * @msg: Error message to be printed.
 */

void print_err(const char *msg)
{
	size_t i = 0;

	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	_putchar('\n');
	exit(98);
}

/**
 * print_elf_header - Print the ELF header information.
 * @header: Pointer to the ELF header.
 */

void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header->e_ident[i], (i < EI_NIDENT - 1) ? ' ' : '\n');

	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "UNKNOWN");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "UNKNOWN");
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 on success, 98 on failure.
 */

int main(int argc, char *argv[])
{
	int file_d;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_err("Usage: elf_header elf_filename");

	file_d = open(argv[1], O_RDONLY);
	if (file_d == -1)
		print_err("Error: Could not open file");
	if (read(file_d, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_err("Error: Could not read ELF header");

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_err("Error: Not an ELF file");

	print_elf_header(&elf_header);

	if (close(file_d) == -1)
		print_err("Error: Could not close file");

	return 0;
}
