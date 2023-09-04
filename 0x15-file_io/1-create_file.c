#include "main.h"
/**
 * create_file-this is the main function
 *
 * It creates a file
 * @filename:name of the file
 * @text_content:content to be apended
 * Return: 1 if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, txt_let, Written;

	txt_let = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if  (fd == -1)
		return (-1);
	if (text_content != NULL)
	{

		for (txt_let = 0; text_content[txt_let]; txt_let++)
		{
			Written = write(fd, &text_content[txt_let], 1);
			if (Written != 1)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);

	return (1);
}
