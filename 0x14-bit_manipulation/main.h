#ifndef MAIN_H
#define MAIN_H

/* utility */
int _putchar(char c);

/* converts a string of binary number to an unsigned int */
unsigned int binary_to_uint(const char *b);
/* prints the binary represenation of a number */
void print_binary(unsigned long int n);
/* gets the value of a bit at a given index */
int get_bit(unsigned long int n, unsigned int index);

#endif /* MAIN_H */
