#include "sort.h"

void quick_sort(int *array, size_t size)
{
size_t x = 0, z = 0;

	int tmp = 0, *p = 0, cont = 0;

	if (array == NULL)
		return;

	for (z = size; z > 0; z--, cont = 0)
	{
	tmp = array[z];
	for (x = z; x > 0; x--)
		if (array[x] > array[z])
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