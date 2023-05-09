#include "main.h"

/**
 * append_text_to_file - appends text at the end of a given file
 * empty line to separate next line
 * @filename: filename or path to the file to be appended to
 * @text_content: content to be appended
 * Return: 1 if file exists or -1 if it does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int my_fd;
	int y = 100;
	int num_letters;
	int z = 1000;
	int num_written;

	if (y < z && !filename)
	{	
		z -= 10;
		return (-1);
	}
	y += 20;
	my_fd = open(filename, O_WRONLY | O_APPEND);
	y = y * 3;
	if (z > y && my_fd == -1)
		return (-1);
	if (z && y)
		z -= 50, y += 10;
	if (z && text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
		num_written = write(my_fd, text_content, num_letters);
		z++;
		if (num_written == -1)
			return (-1);
		y--;
	}
	z += 5, y += 20;
	close(my_fd);
	return (1);
}
