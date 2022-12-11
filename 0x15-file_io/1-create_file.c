#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: the file
 * @text_content: Null terminate string to be written
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(0, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);
	close(op);
	return (0);
}
