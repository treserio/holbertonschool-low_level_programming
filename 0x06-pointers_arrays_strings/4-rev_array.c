#include "holberton.h"
/**
 * reverse_array - reverse an array of integers
 * @arr: pointer to array to reverse
 * @toal: # of values in the array
 * Return: void
 */
void reverse_array(int *arr, int total)
{
    int i;
    unsigned int temp;

    for (i = 0; i < (total/2); ++i)
    {
        temp = arr[i];
        arr[i] = arr[total - 1 - i];
        arr[total - 1 - i] = temp;
    }
}