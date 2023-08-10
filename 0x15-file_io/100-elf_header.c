#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_magic - Print the magic numbers of the ELF header.
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
}
/**
 * print_elf_class - Print the ELF class (32-bit or 64-bit).
 * @e_ident: Pointer to the ELF identification bytes.
 */
void print_elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
		printf("<unknown>\n");
}
/**
 * main - Entry point of program to display information from the ELF header.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on successful execution, 98 on error.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;
	ssize_t w;
	int temp;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	temp = open(argv[1], O_RDONLY);
	if (temp == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	w = read(temp, &elf_header, sizeof(Elf64_Ehdr));
	if (w != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
		close(temp);
		exit(98);
	}
	printf("ELF Header:\n");
	print_magic(elf_header.e_ident);
	print_elf_class(elf_header.e_ident);
	close(temp);
	return (0);
}
