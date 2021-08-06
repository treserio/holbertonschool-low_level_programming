#include <stdio.h>

/**
 * early_bird - prints string before main
 * Return: void
 */

void __attribute__((constructor)) early_bird()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}