#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - A text file and prints it to POSIX stdout.
 *
 * Description:
 * @filename: file name pointer
 * @letters: letter numbers the function should read and print.
 *
 * Return: letter number read and printed, or 0 (failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rdCount, wrCount;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rdCount = read(fd, buff, letters);
	wrCount = write(STDOUT_FILENO, buff, rdCount);

	if (file == -1 || rdCount == -1 || wrCount == -1 || wrCount != rdCount)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(file);
	return (wrCount);
}
