#include "holberton.h"
/**
 * sum_them_all - sum a variable amount of given values
 * @num: the identifier for the arguements
 * Return: the sum of all the variables
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chk;
	char *temp = malloc(letters);

	if (!filename || !temp)
		return (0);

	chk = open(filename, O_RDONLY);
	if (chk == -1)
		return (0);

	chk = read(chk, temp, letters);
	if (chk == -1)
		return (0);
	
	chk = write(STDOUT, temp, chk);
	if (chk == -1)
		return (0);

	free(temp);
	return (chk);
}
