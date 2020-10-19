#pragma once
#ifndef __QUICK_SORT__
#define __QUICK_SORT__

//Lomuto partition scheme - choosing last element as pivot item
int partition(int* arr, int lo, int hi);
void quicksort(int* arr, int lo, int hi);

#endif //
