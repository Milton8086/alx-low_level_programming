#include "main.h"

/**
 * create_file - creates file and adds permisssion
 * @filename : file to be created
 * @text_content : content to be written
 * Return: 1 or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int mw, rw, la = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (la = 0; text_content[la];)
			la++;
	}

	mw = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rw = write(mw, text_content, la);

	if (mw == -1 || rw == -1)
		return (-1);

	close(mw);

	return (1);
}
