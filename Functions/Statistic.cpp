#include"Statistic.h"

template<typename T>
T Sum(T arr[], const int n) {
	// Cумма элементов массива
	T sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
}

template<typename T>
double Avg(T arr[], const int n) {
	// Cреднее арифметическое
	return (double)Sum(arr, n) / n;
}

template<typename T>
T Min(T arr[], const int n) {
	// Минимальное значение
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

template<typename T>
T Max(T arr[], const int n) {
	// Максимальное значение
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
