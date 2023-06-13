#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The function read text file print to STDOUT.
 * @filename: is the text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *number;
	ssize_t tf;
	ssize_t w;
	ssize_t text;

	tf = open(filename, O_RDONLY);
	if (tf == -1)
		return (0);
	number = malloc(sizeof(char) * letters);
	text = read(tf, number, letters);
	w = write(STDOUT_FILENO, number, text);

	free(number);
	close(tf);
	return (w);
}

