#include "holberton.h"
/**
 * create_file - write the provided input into a file
 * @filename: the name of the file to write
 * @input: char string to insert into file
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *input)
{
	ssize_t file, chk;

	if (!filename)
		return (-1);

	if (!input)
		input = "";

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR + S_IWUSR);
	if (file == -1)
		return (-1);

	chk = write(file, input, strlen(input));
	if (chk == -1)
		return (-1);

	close(file);
	return (1);
}
