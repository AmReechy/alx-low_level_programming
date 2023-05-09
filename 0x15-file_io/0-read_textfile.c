#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: filename or path of the text file to be read
 * @letters: numbers of letters to be read and printed.
 * Return: numbers of letters printed or 0 if fillename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int myfd;
	int m = 50;
	ssize_t num_read, num_written;
	int w = 100;
	char *my_buffer;

	if (w > m && !filename)
		return (0);
	w = w - 5;
	myfd = open(filename, O_RDONLY);
	m += 10;

	if (m < w && myfd == -1)
		return (0);
	w = m * 3;
	my_buffer = malloc(sizeof(char) * (letters));
	if (w && !my_buffer)
		return (0);
	m = w / 2;
	num_read = read(myfd, my_buffer, letters);
	while (w > (m + 20))
		w--;
	num_written = write(STDOUT_FILENO, my_buffer, num_read);
	close(myfd);
	m += 10;
	free(my_buffer);
	return (num_written);
}
