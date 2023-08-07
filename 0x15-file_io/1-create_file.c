#include "main.h"

/**
 * create_file - The Function to creates a file
 * @filename: A pointer to a filename.
 * @text_content: A pointer to content writen in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int numlet;
	int value;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
		;

	value = write(file, text_content, numlet);

	if (value == -1)
		return (-1);

	close(file);

	return (1);
}
