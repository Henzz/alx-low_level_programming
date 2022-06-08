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
	printf("Size of a char: %ld bytes\n", sizeof(charType));
	printf("Size of an Int: %ld bytes\n", sizeof(integerType));
	printf("Size of a long int: %ld bytes\n", sizeof(longIntType));
	printf("Size of a long long int: %ld bytes\n", sizeof(longLongIntType));
	printf("Size of a float: %ld bytes\n", sizeof(floatType));
	return (0);
}
