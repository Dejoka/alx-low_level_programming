#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile  - read textfile to print STDOUT
 * @filename: text being read
 * @letters: numbers of letters to read and print
 * Return: w - actual numbers of letters to read and print
 * 0 if file cannot be read or opened, write fails or file name is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
	return (0);
	}
	buffer = malloc(sizeof(char) *  letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	close(fd);
	free(buffer);
	return (w);
}
