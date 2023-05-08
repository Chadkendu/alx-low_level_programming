#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - read text file and prints to POSIX stdout.
 *
 * Description:
 * @fileName: name of file pointer
 * @letter: letter numbers the function should read and print.
 *
 * Return: letter numbers read and printed, or 0 (error)
 */

ssize_t read_textfile(const char *fileName, size_t letter)
{
	ssize_t rdCount, wrCount;
	int fileDir;
	char *buff;

	if (!fileName)
		return (0);

	buffer = malloc(letter);
	if (!buff)
		return (0);

	fileDir = open(fileName, O_RDONLY);
	if (fileDir == -1)
		return (0);
	rdCount = read(fileDir, buff, letter);
	wrCount = write(STDOUT_FILENO, buff, rdCount);

	if (wrCount == -1)
		return (0);

	free(buff);
	close(fileDir);
	return (wrCount);
}
