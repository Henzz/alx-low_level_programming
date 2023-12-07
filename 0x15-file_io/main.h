#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Buffer size */
#define BUFFER_SIZE 1024

/* Task #0 - reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);
/* Task #1 - creates a file */
int create_file(const char *filename, char *text_content);
/* Task #2 - appends a text at the end of a file */
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */

