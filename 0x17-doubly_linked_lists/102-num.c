#include <stdio.h>
#include <stdlib.h>

int opposite(int n);

int main()
{
	int greatest = 0;
	
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= 999; j++)
		{
			if (i*j==opposite(i*j) && i*j > greatest)
				greatest = i*j;
		}
	}
	// fprintf(file, "this is a test %d\n", integer);
	if (filename == NULL)
		return (-1);
	file = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (file == -1)
	{
		return (-1);
	}
	i = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	write(file, text_content, i);
	printf("L: %d\n", greatest);
	return (0);
}

int opposite(int n)
{
	int m = 0;

	while (n > 0)
	{
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return (m);
}
