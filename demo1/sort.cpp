#include "sort.h"

void bubbleSort(int length, int* arr) {
	int tmp;
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++){
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}


