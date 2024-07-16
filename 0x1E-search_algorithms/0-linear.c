#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: the first index of value or -1 if it doesnt exist
 */

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 30;
    int index = linear_search(array, size, value);

    if (index != -1) {
        printf("Value found at index %d\n", index);
    } else {
        printf("Value not found in array\n");
    }

    return 0;
}
