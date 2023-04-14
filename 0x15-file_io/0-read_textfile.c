#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads file & prints it to POSIX standard output.
 * @filename:The file to be read
 * @letters: number of letters to be printed
 * Return:0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes_read, num_bytes_written;
	char *buf;

/*if filename is NULL return 0*/
	if (filename == NULL)
	{
		return (0);
	}

	/*open file,If the file cannot be opened, the function returns 0.*/

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	/*buf is allocated the number of letters*/

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	num_bytes_read = read(fd, buf, letters);
	if (num_bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	/*write to standard output*/

	num_bytes_written = write(STDOUT_FILENO, buf, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		close(fd);
		free(buf);
		return (0);
	}

	/*return number of bytes read and written */

	close (fd);
	free(buf);
	return (num_bytes_written);
}
