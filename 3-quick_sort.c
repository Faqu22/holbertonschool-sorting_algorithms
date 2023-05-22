#include "sort.h"


void swap(int *i, int *j)
{
    int tmp = *i;
    *i = *j;
    *j = tmp;
}

int partition(int *array, int l, int r)
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
	print_array(array, sizeof(array));
    return (i);
}

void quick_sort_Rec(int *array, int low, int high)
{
	int i = 0;

	if (low < high)
	{
		i = partition(array, low, high);
		quick_sort_Rec(array, low, i - 1);
		quick_sort_Rec(array, i + 1, high);
	}
}

void quick_sort(int *array, size_t size)
{
	quick_sort_Rec(array, 0, size);
}

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}