#include "main.h"
#include <unistd.h>

/**
 * create_file - Creats a text file and prints it to STDOUT
 *
 * Description:
 * @filename:file name to create
 * @text_content: Text content to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, bytestat, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + length) != '\0')
			length++;
	}

	bytestat = write(file, text_content, length);
	if (bytestat == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
