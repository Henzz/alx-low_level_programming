#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
/**
 * display_err - display error message with given message.
 * @msg: pointer to the message content.
 */
void display_err(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}
/**
 * display_elf_header - displays the informations in the ELF header
 * at the start of an ELF file.
 * @filename: pointer to the filename.
 */
void display_elf_header(const char *filename)
{
	Elf64_Ehdr elf_header;
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		display_err("Failed to open the file");

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		display_err("Failed to read the ELF header");

	/* Check if it's a valid ELF file */
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
		display_err("Not a valid ELF file");

	/* Display the required information */
	printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2],
			elf_header.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", elf_header.e_entry);
	close(fd);
}

/**
 * main - displays the information contained in an ELF header file
 * at the start of an ELF file.
 * @ac: number of argumnets passed.
 * @arv: array of argument's name.
 *
 * Return: 0 on success.
 */
int main(int ac, char **arv)
{
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	display_elf_header(arv[1]);
	return (0);
}
