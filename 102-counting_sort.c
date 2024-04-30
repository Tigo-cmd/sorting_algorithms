#include "sort.h"
/**
* _malloc_2 - implements memory alocations as calloc
* @element: elements numbers
* @size: size of each element bit
*
* Return: pointer
*/
void *_malloc_2(unsigned int element, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == '\0')
		return ('\0');
	for (i = 0; i < (nmemb * size); i++)
		p[i] = '\0';
	return (p);
}
/**
* counting_sort - function that sorts a doubly linked list of integers in
* ascending order using the Cocktail shaker sort algorithm
* @array: list of numbers
* @size: size of the array
*
* Return: Nothing
*/
void counting_sort(int *array, size_t size)
{
	int i, max, *count, *temp;
	size_t j;

	count = '\0';
	temp = '\0';
	if (array == NULL)
		return;
	if (size < 2)
		return;
	j = 0;
	while (j < size)
	{
		if (array[j] > max)
			max = array[j];
		j++;
	}
	count = _malloc_2(max + 1, sizeof(int));
	temp = _malloc_2(size + 1, sizeof(int));
	i = 1;
	while (i <= max)
	{
		count[i] = count[i] + count[i - 1];
		i++;
	}
	print_array(count, max + 1);
	j = 0;
	while (j < size)
	{
		temp[count[array[j]] - 1] = array[j];
		count[array[j]] = count[array[i]] - 1;
		j++;
	}
	for (j = 0; j < size; j++)
		array[j] = temp[j];
	free(temp);
	free(count);
}
