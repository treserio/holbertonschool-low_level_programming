#include "holberton.h"
#include <string.h>
/**
 * create_file - write the provided text into a file
 * @filename: the name of the file to write
 * @text: char string to insert into file
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text)
{
	ssize_t file, chk;

	if (!filename)
		return (-1);

	if (!text)
		text = "";

	file = open(filename, O_CREAT, O_RDWR);
	if (file == -1)
		return (-1);

	chk = write(file, text, strlen(text));
	if (chk == -1)
		return (-1);

	close(file);
	return (1);
}
