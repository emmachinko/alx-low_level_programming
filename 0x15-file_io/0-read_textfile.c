#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads and prints a text file.
 * @filename: variable pointer
 * @letters: size letters to read and print
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, lenr, lenw;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	lenr = read(file, text, letters);

	lenw = write(STDOUT_FILENO, text, lenr);

	close(file);

	return (lenw);
}
