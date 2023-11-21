#include "sort.h"

/**
 * swap - Swaps two different elements of the same array
 * @array: Array to be sorted
 * @i: Index of the first element to swap
 * @j: Index of the second elemnt to swap
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
/**
 * partition - array partition
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 * Return: int pivot index
 */
int partition(int *array, int first, int last, size_t size)
{
	int i, j;

	i = first - 1;
	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < array[last])
		{
			i++;
			if (i < j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[last])
	{
		swap(array, i + 1, last);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quickSortR - Sorts an array of integers recursively
 * @array: Array to be sorted
 * @first: First bound
 * @last: Last bound
 * @size: Array size
 */
void quickSortR(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		quickSortR(array, first, pivot - 1, size);
		quickSortR(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - Implimentation of the quick sort algorithm
 * @array: Array to be sorted
 * @size: Array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSortR(array, 0, size - 1, size);
}
