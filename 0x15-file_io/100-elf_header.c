#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include "elf_functions.h"

void verify_ELF(unsigned char *temp);
void display_ELF_Signature(unsigned char *temp);
void display_ELF_class(unsigned char *temp);
void display_information(unsigned char *temp);
void DispalyVersion(unsigned char *temp);
void display_OSABI(unsigned char *temp);
void  ABI_Version(unsigned char *tempt);
void Type(unsigned int data, unsigned char *temp);
void point_address(unsigned long int data, unsigned char *temp);
void turn_off(int temp);

/**
 * verify_ELF - Function that checks if the data matches ELF identification.
 * @temp: Pointer to an unsigned char represente ELF identification bytes.
 *
 * Return: void
 */
void verify_ELF(unsigned char *temp)
{
	int x;

	for (x = 0; x < 4; x++)
	{
		if (temp[x] != 127 && temp[x] != 'E' && temp[x] != 'L' && temp[x] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not include ELF file\n");
			exit(98);
		}
	}
}
/**
 * display_ELF_Signature - Function that displays the ELF magic signature.
 * @temp: Pointer to unsigned character represente ELF identification bytes.
 *
 * Return: void
 */
void display_ELF_Signature(unsigned char *temp)
{
	int j;

	printf(" Magic: ");
	for (j = 0; j < EI_NIDENT; j++)
	{
		printf("%02x", temp[j]);
		if (j == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}
}
/**
 * display_ELF_class - function that are used to print ELF class
 * @temp: will receiving pointer unsigned character
 * Return: void
 */
void display_ELF_class(unsigned char *temp)
{
	printf(" Class: ");

	switch (temp[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("The class not include\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", temp[EI_CLASS]);
	}
}
/**
 * display_information - Function to display various information ELF header.
 * @temp: Pointer unsigned character represent ELF identification byte.
 *
 * Return: void
 */
void display_information(unsigned char *temp)
{
	printf(" Data: ");

	switch (temp[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", temp[EI_DATA]);
	}
}

/**
 * DisplayVersion - Function to display the version information ELF header.
 * @temp: Pointer to unsigned character represent ELF identification bytes.
 *
 *  Return: void
 */
void DisplayVersion(unsigned char *temp)
{
	printf(" Version: %d", temp[EI_VERSION]);

	if (temp[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}

/**
 * display_OSABI - Function that displays Operating System/ABI information.
 * @temp: Pointer to an array of characters containing ELF header information.
 * Return: void
 */
void display_OSABI(unsigned char *temp)
{
	printf(" OS/ABI: ");

	if (temp[EI_OSABI] == ELFOSABI_NONE)
	printf("UNIX - System V\n");
	else if (temp[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (temp[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (temp[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (temp[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (temp[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (temp[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (temp[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (temp[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (temp[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("App\n");
	else
		printf("<unknown: %x>\n", temp[EI_OSABI]);
}
/**
 * ABI_Version - Function to display ABI version information.
 * @temp: Pointer to an array of characters containing ELF header information.
 *
 * Return: void
 */
void  ABI_Version(unsigned char *temp)
{
	printf(" ABI Version: %d\n", temp[EI_ABIVERSION]);
}
/**
 * Type - Function to display the type information of an ELF file.
 * @data: Data representing the ELF file type.
 * @temp: Pointer to an array of characters containing ELF header information.
 *
 * Return: void
 */
void Type(unsigned int data, unsigned char *temp)
{
	if (temp[EI_DATA] == ELFDATA2MSB)
	{
		data >>= 8;
	}
	printf(" Type: ");
	if (data == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (data == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (data == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (data == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (data == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", data);
	}
}
/**
 * point_address - Function to display address with swapped values necessary.
 * @data: Data representing the entry point address.
 * @temp: Pointer to an array of characters containing ELF header information.
 *
 * Return: void
 */
void point_address(unsigned long int data, unsigned char *temp)
{
	printf(" Entry point address: ");

	if (temp[EI_DATA] == ELFDATA2MSB)
	{
		data = ((data << 8) & 0xFF00FF00) | ((data >> 8) & 0xFF00FF);
		data = (data << 16) | (data >> 16);
	}
	if (temp[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)data);
	}
	else
	{
		printf("%#lx\n", data);
	}
}
/**
 * turn_off - Function used to close a file descriptor.
 * @temp: The file descriptor to be closed.
 *
 * Return: void
 */
void turn_off(int temp)
{
	if (close(temp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", temp);
		exit(98);
	}
}
/**
 * main - Entry point of the program to analyze an ELF file header.
 * @n: The number of command-line arguments (unused).
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on successful execution, 98 on error.
 */
int main(int __attribute__((__unused__)) n, char *argv[])
{
	Elf64_Ehdr *ptr;
	int file, w;

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}
	ptr = malloc(sizeof(Elf64_Ehdr));
	if (ptr == NULL)
	{
		turn_off(file);
		dprintf(STDERR_FILENO, "Error: Memory are fail to allocate %s\n", argv[1]);
		exit(98);
	}
	w = read(file, ptr, sizeof(Elf64_Ehdr));
	if (w == -1)
	{
		free(ptr);
		turn_off(file);
		dprintf(STDERR_FILENO, "Error:`%s`: Can't read ELF from file\n", argv[1]);
		exit(98);
	}
	verify_ELF(ptr->e_ident);
	printf("EL Header:\n");
	display_ELF_Signature(ptr->e_ident);
	display_ELF_class(ptr->e_ident);
	display_information(ptr->e_ident);
	DisplayVersion(ptr->e_ident);
	display_OSABI(ptr->e_ident);
	ABI_Version(ptr->e_ident);
	Type(ptr->e_type, ptr->e_ident);
	point_address(ptr->e_type, ptr->e_ident);
	free(ptr);
	turn_off(file);
	return (0);
}
