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
	int fileRead, i, fileOpen;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);

	if (str == NULL)
		return (0);

	fileOpen = open(filename, 0_RDONLY);

	if (fileOpen == -1)
	{
		free(str);
		return (0);
	}

	fileRead = read(fileOpen, str, letters);

	if (fileRead == -1)
	{
		close(fileOpen);
		free(str);
		return (0);
	}

	for (i = 0; i < fileRead; i++)
	{
		if (write(STDOUT_FILENO, &str[i], 1) == -1)
		{
			close(fileOpen);
			free(str);
			return (0);
		}
		write(STDOUT_FILEN, &str[i],  fileRead);
	}
	close(fileOpen);
	free(str);

	return (fileRead);
}

