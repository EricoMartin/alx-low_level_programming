#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: the name of file to read
 * @letters: the number of letters it should read and print
 * Return: number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileOpen, i, fileRead;
	char *buffer;
	ssize_t readfile;

	if (filename == NULL)
		return (0);
	fileOpen = open(filename, O_RDONLY);
	if (fileOpen == -1)
	{
		return (0);
	}
	fileRead = read(fileOpen, buffer, letters);
	if (fileRead == -1)
	{
		close(fileOpen);
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	for (i = 0; i < fileRead; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) == -1)
		{
			close(fileOpen);
			free(buffer);
			return (0);
		}
	}
	readfile = write(STDOUT_FILENO, buffer, fileRead);
	close(fileOpen);
	free(buffer);
	return (readfile);
}
