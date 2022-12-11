#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @letters: the number of letters
 * @filename: the file name
 * Return: 0 if write fails or is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wt, op;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);
	if (op == -1 || rd == -1 || wt == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wt);
}
