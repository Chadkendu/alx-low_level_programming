#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the file end
 *
 * Description:
 * @filename: Name of the file
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wLength = 0, tLength = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < -1)
		return (-1);

	if (text_content)
	{
		while (*(text_content + tLength) != '\0')
			tLength++;

		wLength = write(file, text_content, tLength);
		if (wLength == -1 || wLength != tLength)
			return (-1);
	}

	close(file);

	return (1);
}
