#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * create_file - Creates a file
 * @filename:pointer to the name of the file to create
 * @text_content: pointer to a string to write to the created file
 *
 * Return:If the function fails --1
 * Otherwise -1
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	int writ;
	int len;


	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{

		len = strlen(text_content);

	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	writ = write(fd, text_content, len);
	if (writ == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
