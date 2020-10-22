#include "QuickSort.h"
#include<iostream>

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

//Lomuto partition scheme - choosing last element as pivot item
int partition(int* arr, int lo, int hi)
{
	int pivot = arr[hi];
	int i = lo;
	for (int j = lo; j < hi; j++)
	{
		if (arr[j] < pivot)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}

	swap(arr[i], arr[hi]);
	return i;
}

void quicksort(int* arr, int lo, int hi)
{
	if (lo < hi)
	{
		int part = partition(arr, lo, hi);
		quicksort(arr, lo, part-1);
		quicksort(arr, part + 1, hi);
	}
}

int partation2(int *arr, int l, int r)
{
	int pivot = arr[l];
	int i = l+1;
	for (size_t j = l+1; i < r; i++)
	{
		if (arr[j] < pivot)
		{
			swap(arr[i], arr[j]);
			i++;
		}
	}

	swap(arr[i], arr[l]);
	return i;
}