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
 * partition - Divides the array into partitions, then sorts them
 * @array: Array to be sorted
 * @low: Lower bound
 * @high: Higher bound
 * @n: Size of the array
 *
 * Return: The index of the pivot
 */
int partition(int *array, int low, int high, int n)
{
	int pivot = array[high];
	int i, j;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j);
		}
	}
	swap(array, i + 1, high);
	print_array(array, n);
	return (i + 1);
}

/**
 * quickSort - Processes the left part of the pivot
 * and the right part of it
 * @array: Array to be sorted
 * @low: Lower bound
 * @high: Higher bound
 * @n: Size of the array
 */
void quickSort(int *array, int low, int high, int n)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, n);
		quickSort(array, low, pi - 1, n);
		quickSort(array, pi + 1, high, n);
	}
}

/**
 * quick_sort - Implimentation of the quick sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (arra == NULL || size < 2)
		return;
	quickSort(array, 0, (int)(size - 1), (int)size);
}
