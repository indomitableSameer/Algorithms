#include "BinarySearch.h"
#include <iostream>

bool binarySearchRecursive(int* arr, int l, int r, int item)
{
	if (l < r)
	{
		int mid = (l + r) / 2;
		if (item == arr[mid])
			return true;

		if (item > arr[mid])
			binarySearchRecursive(arr, mid+1, r, item);

		if (item == arr[mid])
			binarySearchRecursive(arr, l, mid -1, item);
	}

	return false;
}

bool binarySearch(int* arr, int len, int item)
{
	int l = 0;
	int r = len - 1;
	while (l<r)
	{
		int mid = (l+r) / 2;
		std::cout << "mid=" << mid << "\n";
		std::cout << "l=" << l << "\n";
		std::cout << "r=" << r << "\n";
		if (item > arr[mid])
		{
			l = mid + 1;
		}
		else if (item < arr[mid])
		{
			r = mid - 1;
		}
		else
		{
			return true;
		}
	}

	return false;
}