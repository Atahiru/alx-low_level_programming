#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n) {
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

