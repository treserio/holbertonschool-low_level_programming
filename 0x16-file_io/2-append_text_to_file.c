#include "holberton.h"
/**
 * append_text_to_file - read "letters" amount of text from a file
 * @filename: the name of the file to read
 * @letters: the number of chars to read from the file
 * Return: 0 on failure, else the number of chars printed to stdout
 */
int append_text_to_file(const char *filename, char *input)
{
	ssize_t file, chk;

	if (!filename)
		return (-1);
	
	if (!input)
		input = "";
	
	file = open(filename, O_APPEND)
	if (file == -1)
		return (-1);
	
	chk = write(file, input, strlen(input));
	if (chk == -1 || chk == 13)
		return (-1);
	
	close(file);
	return (1);
}
