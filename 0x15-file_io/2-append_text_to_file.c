#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: the file
 * @text_content: the text to append
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(0, text_content, len);
	if (op == -1 || wt == -1)
		return (-1);
	close(op);
	return (1);
}
