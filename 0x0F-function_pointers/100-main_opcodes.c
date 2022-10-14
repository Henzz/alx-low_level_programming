#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: list of arguments passed
 *
 * Return: nothing.
 */
void main(int argc, char *argv[])
{
	int nbyte;
	ud_t ud_obj;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbyte = atoi(argv[1]);
	if (nbyte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ud_init(&ud_obj);
	ud_set_input_file(&ud_obj, stdin);
	ud_set_mode(&ud_obj, nbyte);
	ud_set_syntax(&ud_obj, UD_SYN_INTEL);i
	while (ud_disassemble(&ud_obj))
	{
		printf("\t%d\n", ud_insn_asm(&ud_obj));
	}
}
