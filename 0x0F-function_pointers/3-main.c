#include "3-calc.h"

/**
 * main - prints a number calculated from index of 1 and index of 3
 * according to the operand passed(index of 2) of given 4 string arguments
 * @argc: number of arguments
 * @argv: strings of argumnets
 *
 * Return: nothing.
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (strcmp(operator, "+") != 0 &&
			strcmp(operator, "-") != 0 &&
			strcmp(operator, "*") != 0 &&
			strcmp(operator, "/") != 0 &&
			strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && ((*operator == '/') || (*operator == '%')))
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (calc);
}
