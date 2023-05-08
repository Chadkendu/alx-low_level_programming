#include "main.h"
#include <unistd.h>

/**
 * Auth: Joshua Ajayi
 * create_file - create a file with read/write access for user
 *
 * Description:
 * @filename: file name to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, Bytestat, length = 0;
	
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

	Bytestat = write(file, text_content, length);
	if (Bytestat == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
