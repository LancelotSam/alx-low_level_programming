#include "main.h"
/**
 * read_textfile-this is the main function
 *
 * It reads a textfile
 * @filename:a pointer to the name of the file
 * @letters: the number of letters in the file
 * Return: the number of read letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_let, Written;

	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd  == -1)
		return (0);
	read_let = read(fd, buffer, letters);
	/**
	 * read_let = read(fd, buffer, sizeof(buffer));
	 * if (read_let == 0 || letters > read_let)
	 * letters = read_let;
	 */

	Written = write(STDOUT_FILENO, buffer, read_let);

	close(fd);

	free(buffer);

	return (Written);
}

