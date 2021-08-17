#include "holberton.h"
/**
 * append_text_to_file - append text to the specified file
 * @filename: the name of the file to append text to
 * @input: the string to append to the file
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *input)
{
	ssize_t file, chk;

	if (!filename)
		return (-1);

	if (!input)
		input = "";

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	chk = write(file, input, strlen(input));
	if (chk == -1)
		return (-1);

	close(file);
	return (1);
}
