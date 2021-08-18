#include "holberton.h"
/**
 * main - copy text from one file to another
 * @argc: the number of arguments passed the function
 * @argv: array of arguments passed the function as char *
 * Return: 0 on Success, 97 wrong args, 98 no read, 99 no write, 100 no close
 */
int main(int argc, char *argv[])
{
	char temp[1024];
	int f_frm, f_to, chk;
	/* confirm correct arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* check read file1 */
	f_frm = open(argv[1], O_RDONLY);
	if (f_frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((chk = read(f_frm, temp, 1024)) != 0)
	{
		if(write(f_to, temp, chk) != chk)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(f_frm) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_frm);
		exit(100);
	}
	if (close(f_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to), exit(100);
	return (0);
}
