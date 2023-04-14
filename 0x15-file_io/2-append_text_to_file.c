#include "main.h"

/**
 * append_text_to_file - a function that appends text in a file
 * @filename :name of the  file to append text to
 * @text_content : text to be appended
 * Return: 1 0r -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0;
	int edit = 0;
	int size = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file = open(filename, O_WRONLY, O_APPEND);
	if (file == -1)
		return (-1);

	for (size = 0; text_content[size] != '\0'; size++);

	edit = write(file, text_content, size);
	if (edit == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
