#include "main.h"

/**
 * append_text_to_file - The function to appends text at the end of a file
 * @filename: A pointer to a filename.
 * @text_content: A pointer to added content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int numlet;
	int value;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (nunlet = 0; text_content[numlet]; numlet++)
			;

		value = write(file, text_content, numlet);

		if (value == -1)
			return (-1);
	}

	close(file);

	return (1);
}
