#include <stdio.h>
/**
 * main - write predestined text to stderr
 * Description: Don't use print functions
 * Return: 1
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(str, (sizeof(str) - 1), 1, stderr);
return (1);
}
