/*#!/bin/bash*/
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - Print alphabet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	write(1, &a, 1);
}
/**
 * main - Entry point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}
