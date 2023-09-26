#include "sort.h"
/**
* selection_sort - implements the selection sort algorithim 
* @array: array to be sorted
* @size: no. of items in the array
*
* Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t j, i;
	int temp, swaped, flag;

	flag = 0;
	if (!array)
		return;
	while (i < size)
	{
		temp = i;
		flag = 0;
		j = 1;
		while ( j < size)
		{
			if (array[temp] > array[j])
			{
				temp = j;
				flag = flag + 1;
			}
			j++;
		}
		swaped = array[i];
		array[i] = array[temp];
		array[temp] = swaped;
		if (flag != 0)
		{
			print_array(array, size);
		}
		i++;
	}
}
