#include "holberton.h"
/**
 * read_textfile - read "letters" amount of text from a file
 * @filename: the name of the file to read
 * @letters: the number of chars to read from the file
 * Return: 0 on failure, else the number of chars printed to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, chk;
	char *temp = malloc(letters);

	if (!filename || !temp)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	chk = read(file, temp, letters);
	if (chk == -1)
		return (0);

	chk = write(STDOUT_FILENO, temp, chk);
	if (chk == -1)
		return (0);

	free(temp);
	close(file);
	return (chk);
}
