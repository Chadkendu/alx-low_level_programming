#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read text file and prints to POSIX stdout.
 *
 * Description:
 * @filename: name of file pointer
 * @letters: letter numbers the function should read and print.
 *
 * Return: letter numbers read and printed, or 0 (error)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rdCount, wrCount;
	int fileDir;
	char *buff;

	if (!filename)
		return (0);

	buffer = malloc(letters);
	if (!buff)
		return (0);

	fileDir = open(filename, O_RDONLY);
	if (fileDir == -1)
		return (0);
	rdCount = read(fileDir, buff, letters);
	wrCount = write(STDOUT_FILENO, buff, rdCount);

	if (wrCount == -1)
		return (0);

	free(buff);
	close(fileDir);
	return (wrCount);
}
