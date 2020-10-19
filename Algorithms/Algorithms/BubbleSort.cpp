#include "BubbleSort.h"
#include<iostream>

void basicBubbleSort(int *arr, int len)
{
	for (size_t i = 0; i < len-1; i++)
	{
		for (size_t j = 0; j < len-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

// Bubble sort which stop once there is no swapping in a pass as there will be no further swapping.
void proBubbleSort(int* arr, int len)
{
	bool noExchange = false;
	for (size_t i = 0; i < len && !noExchange; i++)
	{
		for (size_t j = 0; j < len - i - 1; j++)
		{
			noExchange = true;
			if (arr[j] > arr[j + 1])
			{
				noExchange = false;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}