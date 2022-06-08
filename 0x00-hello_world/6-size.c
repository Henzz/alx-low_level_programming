/*#!/bin/bash*/
#include <stdio.h>

/**
 * main - Entry point
 *
 */
int main(void)
{
	int integerType;
	float floatType;
	long int longIntType;
	long long int longLongIntType;
	char charType;

	// Sizeof
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
