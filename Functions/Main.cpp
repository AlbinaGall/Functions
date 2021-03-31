#include<iostream>
using namespace std;


void FillRand(char arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(int arr[], const int n, int MinRand=0, int MaxRand=100);
void FillRand(float arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[], const int n, int MinRand=0, int MaxRand=100);

void Print(char arr[], const int n);
void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);

void ShiftLeft(char arr[], const int n, const int number_of_shifts);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(float arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);

void ShiftRight(char arr[], const int n, const int number_of_shifts);
void ShiftRight(int arr[], const int n, const int number_of_shifts);
void ShiftRight(float arr[], const int n, const int number_of_shifts);
void ShiftRight(double arr[], const int n, const int number_of_shifts);

void Sort(char arr[], const int n); 
void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);

char Min(char arr[], const int n);
int Min(int arr[], const int n);
float Min(float arr[], const int n);
double Min(double arr[], const int n);

char Max(char arr[], const int n);
int Max(int arr[], const int n);
float Max(float arr[], const int n);
double Max(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int number_of_shifts;

	//CHAR
	char carr[n];
	FillRand(carr, n);
	cout << "Исходный массив: \n";
	Print(carr, n);
	Sort(carr, n);
	cout << "Сортированный массив: \n";
	Print(carr, n);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(carr, n, number_of_shifts);
	Print(carr, n);
	cout << endl;
	cout << "Минимальное значение: " << Min(carr, n) << endl;
	cout << "Максимальное значение: " << Max(carr, n) << endl;
	
	//INT
	int arr[n];
	FillRand(arr, n);
	cout << "Исходный массив: \n";
	Print(arr, n);
	Sort(arr, n);
	cout << "Сортированный массив: \n";
	Print(arr, n);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << endl;
	cout << "\nСумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое значение: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << Min(arr, n) << endl;
	cout << "Максимальное значение: " << Max(arr, n) << endl;

	//FLOAT
	float farr[n];
	FillRand(farr, n);
	cout << "Исходный массив: \n";
	Print(farr, n);
	Sort(farr, n);
	cout << "Сортированный массив: \n";
	Print(farr, n);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(farr, n, number_of_shifts);
	Print(farr, n);
	cout << endl;
	cout << "\nСумма элементов массива: " << Sum(farr, n) << endl;
	cout << "Среднее арифметическое значение: " << Avg(farr, n) << endl;
	cout << "Минимальное значение: " << Min(farr, n) << endl;
	cout << "Максимальное значение: " << Max(farr, n) << endl;

	//DOUBLE - Сдвиг вправо

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	cout << "Исходный массив_2: \n";
	Print(brr, m);
	Sort(brr, m);
	cout << "Сортированный массив_2: \n";
	Print(brr, m);
	
	//сдвиг массива
	cout << "\nВведите количество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(brr, m, number_of_shifts);
	Print(brr, m);

	cout << "\nСумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое значение: " << Avg(brr, n) << endl;
	cout << "Минимальное значение: " << Min(brr, n) << endl;
	cout << "Максимальное значение: " << Max(brr, n) << endl;
}


void FillRand(char arr[], const int n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
	}
}

void FillRand(int arr[], const int n, int MinRand, int MaxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()% (MaxRand-MinRand) + MinRand;
	}
}

void FillRand(float arr[], const int n, int MinRand, int MaxRand)
{
	MinRand *= 100;
	MaxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
		arr[i] /= 100;
	}
}

void FillRand(double arr[], const int n, int MinRand, int MaxRand)
{
	MinRand *= 100;
	MaxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
		arr[i] /= 100;
	}
}


void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}


void ShiftLeft(char arr[], const int n, const int number_of_shifts) {
		for (int i = 0; i < number_of_shifts; i++)
		{
			char buffer = arr[0];
			for (int j = 0; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = buffer;
		}
	}

void ShiftLeft(int arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(float arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(double arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}


void ShiftRight(char arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < (n - number_of_shifts); i++)
	{
		char buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n, const int number_of_shifts) {		
	for (int i = 0; i < (n - number_of_shifts); i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(float arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < (n - number_of_shifts); i++)
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(double arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < (n - number_of_shifts); i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
		arr[n - 1] = buffer;
	}
}


void Sort(char arr[], const int n) {
	//метод перебора
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				// меняем элементы местами
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[], const int n) {
	//метод перебора
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				// меняем элементы местами
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n) {
	//метод перебора
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				// меняем элементы местами
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n) {
		//метод перебора
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[j] < arr[i]) {
					// меняем элементы местами
					double buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}


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