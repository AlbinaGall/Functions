#include<iostream>
using namespace std;

#include "FillRand.h"
#include"Print.h"
#include"Shift.h"
#include"Sort.h"
#include"Statistic.h"

/*template<typename T> void Print(T arr[], const int n);
void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);*/

/*template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(float arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);*/

/*template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts);
void ShiftRight(int arr[], const int n, const int number_of_shifts);
void ShiftRight(float arr[], const int n, const int number_of_shifts);
void ShiftRight(double arr[], const int n, const int number_of_shifts);*/

/*template<typename T> void Sort(T arr[], const int n);
void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);*/

/*template<typename T> T Sum(T arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);*/

/*template<typename T> double Avg(T arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);*/

/*template<typename T> T Min(T arr[], const int n);
int Min(int arr[], const int n);
float Min(float arr[], const int n);
double Min(double arr[], const int n);*/

/*template<typename T> T Max(T arr[], const int n);
int Max(int arr[], const int n);
float Max(float arr[], const int n);
double Max(double arr[], const int n);*/

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
