#include"Sort.h"

template<typename T>
void Sort(T arr[], const int n) {
	//метод перебора
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				// меняем элементы местами
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
