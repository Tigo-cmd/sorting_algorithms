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
* part - performs the lomuto scheme algorithim
* @array: array to be sorted
* @size: array size
* @minor: minor index of the par
* @major: major index of the par
* Return: Nothing
*/
int part(int *array, size_t size, ssize_t minor, ssize_t major)
{
	ssize_t i = minor, j;
	int focrum;

	focrum = array[major];
	for (j = minor; j <= major; j++)
	{
		if (array[j] < focrum)
		{
			if (array[i] != array[j])
			{
				swap_array(array, i, j);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] != array[major])
	{
		swap_array(array, i, major);
		print_array(array, size);
	}
	return (i);
}
/**
* recursive_qs - performs quick sort algorithim
* @array: array to be sorted
* @size: array size
* @minor: minor index of the par
* @major: major index of the par
* Return: Nothing
*/
void recursive_qs(size_t size, ssize_t minor, ssize_t major, int *array)
{
	size_t current = 0;

	if (minor < major)
	{
		current = part(array, size, minor, major);

		recursive_qs(size, minor, current - 1, array);
		recursive_qs(size, current + 1, major, array);
	}
}
/**
* quick_sort - qs algo implementation
* @array: array too be sorted
* @size: total number of integer in the array
*
* Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	recursive_qs(size, 0, size - 1, array);
}
