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
/* sets the value of a bit to 1 at a given index */
int set_bit(unsigned long int *n, unsigned int index);
/* sets the value of a bit to 0 at a given index */
int clear_bit(unsigned long int *n, unsigned int index);
/* gets the number of bits it would need to flip to get from one number to another */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* checks the endianness */
int get_endianness(void);

#endif /* MAIN_H */
