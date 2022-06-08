/*#!/bin/bash*/
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	syscall(SYS_write, msg, sizeof(msg));
	return (1);
}
