// Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BubbleSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

void printArr(int* arr)
{
	for (size_t i = 0; i < 7; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}

int main()
{
	{
		int arr[] = { 1, 20, 4, 3, 1, 10 , 7 };
		basicBubbleSort(arr, 7);
		printArr(arr);
	}

	{
		int arr[] = { 1, 20, 4, 3, 1, 10 , 7 };
		proBubbleSort(arr, 7);
		printArr(arr);
	}

	{
		int arr[] = { 1, 20, 4, 3, 1, 10 , 7 };
		mergeSort(arr, 0, 6);
		printArr(arr);
	}

	{
		int arr[] = { 1, 20, 4, 3, 1, 10 , 7 };
		quicksort(arr, 0, 6);
		printArr(arr);
	}

	getchar();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
