#include "sort.h"
/**
* swap_array - swaps array items
* @arr: array to be used
* @a: first index of the array to swap
* @b: second index of the array to swap
* Return: Nothing
*/
void swap_array(int *arr, ssize_t a, ssize_t b)
{
	int temp;

	if (a != b)
	{
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
}
/**
* shell_sort -  function that sorts an array of integers in
* ascending order using the Shell sort algorithm, using the Knuth sequence
* @array: array of integers
* @size: size of the aray
*
* Return: Nothing
*/
void shell_sort(int *array, size_t size)
{
	size_t space = 1, i, j;

	j = 0;
	if (array == NULL)
		return;
	if (size < 2)
		return;
	while (space < (size / 3))
		space = 3 * space + 1;
	while (space >= 1)
	{
		i = space;
		while (i < size)
		{
			for (j = i; j >= space && (array[j] < array[j - space]);
			 j -= space)
			{
				swap_array(array, j, j - space);
			}
			i++;
		}
		print_array(array, size);
		space = space / 3;
	}
}
