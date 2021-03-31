#include"Statistics.h"
int Sum(int arr[], const int n) {
	// Cумма элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
}

float Sum(float arr[], const int n) {
	// Cумма элементов массива
	float sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
}

double Sum(double arr[], const int n) {
	// Cумма элементов массива
	double sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
}


double Avg(int arr[], const int n) {
	// Cреднее арифметическое
	return (double)Sum(arr, n) / n;
}

double Avg(float arr[], const int n) {
	// Cреднее арифметическое
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n) {
	// Cреднее арифметическое
	return (double)Sum(arr, n) / n;
}


char Min(char arr[], const int n) {
	// Минимальное значение
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int Min(int arr[], const int n) {
	// Минимальное значение
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

float Min(float arr[], const int n) {
	// Минимальное значение
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

double Min(double arr[], const int n) {
	// Минимальное значение
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


char Max(char arr[], const int n) {
	// Максимальное значение
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int Max(int arr[], const int n) {
	// Максимальное значение
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

float Max(float arr[], const int n) {
	// Максимальное значение
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

double Max(double arr[], const int n) {
	// Максимальное значение
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}