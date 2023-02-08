#ifndef SORTS_H
#define SORTS_H

#include <stdlib.h>
#include "sort_helper.h"



// =============== Sort Function ===============
// Name: bubblesort
// Desc: O(n^2) comparison sort
// param(1): 'array' is a pointer to an integer address.
//           This is the start of some 'contiguous block of memory'
//           that we will sort.
// param(2)  'size' tells us how big the array of
//           data is we are sorting.
// param(3) 'print' tells it to print out after each iteration.
// Output:   No value is returned, but 'array' should
//           be modified to store a sorted array of size.
void bubbleSortIntegers(int *array, unsigned int size, int print)
{
    for (int i = 0; i < size; i++) {
        printIntArray(array, size);
        int swap_made = 0;
        for (int j = 1; j < size - i; j++) {
            if (array[j - 1] > array[j]) {
                swap(&array[j - 1], &array[j]);
                swap_made = 1;
            }
        }
        if (swap_made == 0) {
            break;
        }
    }
}


// provided code 

// =============== Helper Functions ===============
// Name:    compare
// Desc:    A compare function which returns
//          a value (positive,negative, or 0)
//          to show if the result is >,<, or =.
//
// Input:   a and b here are generic types,
//          that is why they are 'void'
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void quickSortIntegers(int* array, unsigned int size, int print) 
{   // print is ignored as qsort doesn't use it
    qsort(array, size, sizeof(int), compare);
}

#endif