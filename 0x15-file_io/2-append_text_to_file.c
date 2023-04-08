#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int op, writ, len = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
	writ = write(op, text_content, len);

	if (op == -1)
	{
		return (-1);
	}
	if (writ == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		for (len = 0; text_content[len];)
			len++;
	close(op);
	return (1);
}