#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - A text file and prints it to POSIX stdout.
 *
 * Description:
 * @filename: file name pointer
 * @letters: letter number needed to be read
 *
 * Return: letter numbers read and printed, or 0 (failure)
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rdCount, wrCount;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rdCount = read(file, buffer, letters);
	wrCount = write(STDOUT_FILENO, buffer, rdCount);

	if (file == -1 || rdCount == -1 || wrCount == -1 || wrCount != rdCount)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);

	return (wrCount);
}
