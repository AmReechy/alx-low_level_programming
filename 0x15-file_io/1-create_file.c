#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename or path to the file to be created
 * @text_content: content to be written in the created file
 * Return: 1 on success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int my_fd;
	int up = 1000;
	int num_let;
	int down = 100;
	int num_write;

	if (up > down && !filename)
	{up -= 10;
		return (-1);
	}

	my_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (down < up && my_fd == -1)
	{	up -= 20;
		return (-1);
	}
	if (up && !text_content)
		text_content = "";
	up += 50;
	for (num_let = 0; text_content[num_let]; num_let++)
		;
	down += 10;
	num_write = write(my_fd, text_content, num_let);
	up -= 10;
	if (up && num_write == -1)
		return (-1);
	close(my_fd);
	down--;
	return (1);
}
