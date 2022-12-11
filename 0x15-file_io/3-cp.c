#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocaate 1024 of memory to buffer
 * @file: the file buffer links to
 * Return: pointer to new allocated buffer
 */

char *create_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
		return (buffer);
}

/**
 * close_file - close file descipttors
 * @fd: he file descripttor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a filee to another
 * @argc: the argument counts
 * @argv: the argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sr, ds, rd, wt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	sr = open(argv[1], O_RDONLY);
	rd = read(sr, buffer, 1024);
	ds = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (sr == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wt = write(sr, buffer, rd);
		if (ds == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(sr, buffer, 1024);
		ds = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file(sr);
	close_file(ds);
	return (0);
}
