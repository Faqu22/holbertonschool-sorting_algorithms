#include "sort.h"


void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int partition(int *array, int l, int r, size_t size)
{
    int pivot = array[r];
    int i = l, j = l;

    for (j = l; j < r; j++) {
        if (array[j] < pivot) {
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[i], &array[r]);
	print_array(array, size);
    return (i);
}

void quick_sort_Rec(int *array, int low, int high, size_t size)
{
	int i = 0;

	if (low < high)
	{
		i = partition(array, low, high, size);
		quick_sort_Rec(array, low, i - 1, size);
		quick_sort_Rec(array, i + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	quick_sort_Rec(array, 0, size - 1, size);
}