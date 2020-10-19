#include "MergeSort.h"

void mergeSort(int* arr, int l, int r)
{
	int mid;
	if (l < r)
	{
		mid = (l + r) / 2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		mergeSortedSubArrays(arr, l, mid, r);
	}
}

void mergeSortedSubArrays(int* arr, int l, int m, int r)
{
    const int nl = m - l + 1;
	const int nr = r - m;

	int* lArr = new int[nl]; 
	int* rArr = new int[nr];

	// 20 25 30     21 27 32 35

	for (int i = 0; i < nl; i++)
		lArr[i] = arr[l + i];

	for (int j = 0; j < nr; j++)
		rArr[j] = arr[m + j + 1];

	int i = 0, j = 0, k = l;

	// fill real array 
	while (i < nl && j < nr)
	{
		if(lArr[i] < rArr[j])
		{
			arr[k] = lArr[i];
			i++;
		}
		else
		{
			arr[k] = rArr[j];
			j++;
		}
		k++;
	}

	while (i<nl)
	{
		arr[k] = lArr[i];
		i++; k++;
	}

	while (j < nr)
	{
		arr[k] = rArr[j];
		j++; k++;
	}
}