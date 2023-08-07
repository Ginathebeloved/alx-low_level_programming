#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints the letters
 * @filename: A pointer filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed, if fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t number, numwr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	number = read(file, buffer, letters);
	numwr = write(STDOUT_FILENO, buffer, number);

	close(file);

	free(buffer);

	return (numwr);
}
