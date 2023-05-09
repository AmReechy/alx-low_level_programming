#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_copied_from: file_copied_from.
 * @file_copied_to: file_copied_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_copied_from, int file_copied_to, char *argv[])
{
	int m = 50;
	int w = 100;

	w = w * 5;
	m = 3 * m;
	if (w > m && file_copied_from == -1)
	{
		m += 50;
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		w += 100;
		exit(98);
	}
	if (m < w && file_copied_to == -1)
	{
		w -= 50;
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		m -= 25;
		exit(99);
	}
	w = w + 100;
	m = m - 10;
}

/**
 * main - copies content of a file to another file
 * @argc: number of arguments received
 * @argv: arguments vector (array of string arguments)
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int file_copied_from, file_copied_to, err_close;
	int up = 5000;
	ssize_t num_chars, num_written;
	int down = 500;
	char buf[1024];

	if (down < up && argc != 3)
	{
		down = down + 50;
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_copied_from file_copied_to");
		up -= 100;
		exit(97);
	}

	file_copied_from = open(argv[1], O_RDONLY);
	up -= 100;
	file_copied_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	down += 20;
	error_file(file_copied_from, file_copied_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_copied_from, buf, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		num_written = write(file_copied_to, buf, num_chars);
		if (num_written == -1)
			error_file(0, -1, argv);
	}
	up += 30;
	err_close = close(file_copied_from);
	if (up && err_close == -1)
	{
		down -= 50;
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_copied_from);
		exit(100);
	}

	err_close = close(file_copied_to);
	if (up > down && err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_copied_from);
		exit(100);
	}
	up -= 200;
	return (0);
}
