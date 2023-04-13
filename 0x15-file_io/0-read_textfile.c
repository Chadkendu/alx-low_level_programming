#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - A text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: Number of letters the
 *           function should read and print.
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd_cnt, wr_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd_cnt = read(fd, buffer, letters);
	wr_count = write(STDOUT_FILENO, buffer, rd_cnt);

	if (fd == -1 || rd_cnt == -1 || wr_count == -1 || wr_count != rd_cnt)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (wr_count);
}
