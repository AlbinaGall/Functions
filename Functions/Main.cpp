#include<iostream>
using namespace std;

void FillRand(int arr[], const int n)
{
	//Заполняем массив случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const int n)
{
	//Выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Shift(int arr[], const int n, const int number_of_shifts)
{
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

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);//заполнение первого массива
	Print(arr, n);//вывод первого массива в исходном состоянии
	
	//Сдвиг массива на заданное число элементов
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	Shift(arr, n, number_of_shifts);
	Print(arr, n);//вывод сдвинутого массива на экран

	//////////////////////////

	const int m = 8;
	int brr[m];
	FillRand(brr, m);//заполнение второго массива
	Print(brr, m);//вывод второго массива
	
	//сдвиг второго массива
	cout << "\nВведите количество сдвигов: "; cin >> number_of_shifts;
	Shift(brr, m, number_of_shifts);
	Print(brr, m);//Выводим сдвинутый массив на экран
}