#include "sort.h"
/**
 * bubble_sort - Implimentation of the bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (array == NULL || size == 0)
		return;
	i = 0;
	while (i < size)
	{
		flag = 0;
		for (j = 0; j <= size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, (int)j, (int)(j + 1));
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		i++;
	}

}

/**
 * swap - Swaps two array elements
 * @array: Array containing elements
 * @i: index of element to swap
 * @j: index of element to swap
 */
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
