#include "sort.h"
/**
* selection_sort - selection sort.
* @array: array.
* @size: size.
*/
void selection_sort(int *array, size_t size)
{
	size_t x = 0, z = 0;

	int tmp = 0, *p = 0, cont = 0;

	for (z = 0; z < size - 1; z++, cont = 0)
	{
	tmp = array[z];
	for (x = z; x < size; x++)
		if (array[x] < array[z])
		{
			p = &array[x];
			array[z] = array[x];
			cont++;
		}
	if (cont != 0)
	{
		*p = tmp;
		print_array(array, size);
	}
	}
}
