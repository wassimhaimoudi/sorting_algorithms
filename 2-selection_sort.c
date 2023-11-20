#include "sort.h"
/**
 * selection_sort - Implimentation of the selection sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}
		if (min_idx != i)
		{
			swap(array, min_idx, i);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps two array element by their indexes
 * @array: Array to be processed
 * @i: Index of an element
 * @j: Index of the other element
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
