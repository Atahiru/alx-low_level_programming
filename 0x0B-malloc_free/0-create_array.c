#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -create an array and initializes it
 * @c: initailizes the array
 * @size: the size of the memory to print
 *
 * Return: Pointer.
 */

char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
	    return ('\0');

    arr = malloc(size);

    if (arr == NULL)
	    return('\0');

    for(i = 0; i < size; i++)
	    arr[i] = c;

    return (arr);
}
