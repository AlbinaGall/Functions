#include<iostream>
using namespace std;

/*void FillRand(int arr[], const int n)
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

void ShiftLeft(int arr[], const int n, const int number_of_shifts){
	//Циклический сдвиг влево
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

void ShiftRight(int arr[], const int n, const int number_of_shifts){
	//Циклический сдвиг вправо
	for (int i = 0; i < (n-number_of_shifts); i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[n-1] = buffer;
	}
}

void Sort(int arr[], const int n) {
	//сортировка массива
	int buffer = 0;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (arr[j] > arr[j + 1]) {
				// меняем элементы местами
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
}


double Sum(int arr[], const int n) {
	// Cумма элементов массива
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}


double Avg(int arr[], const int n) {
	// Cреднее арифметическое
	double sum = Sum(arr, n);
	double avg = sum / n;
	return avg;
}


double Min(int arr[], const int n) {
	// Минимальное значение
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


double Max(int arr[], const int n) {
	// Максимальное значение
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
*/
//объявление функций
void FillRand(int arr[], const int n, int MinRand=0, int MaxRand=100);
void FillRand(double arr[], const int n, int MinRand=0, int MaxRand=100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftRight(int arr[], const int n, const int number_of_shifts);
void ShiftRight(double arr[], const int n, const int number_of_shifts);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int Min(int arr[], const int n);
int Max(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);//заполнение первого массива
	cout << "Исходный массив: \n";
	Print(arr, n);//вывод первого массива в исходном состоянии
	Sort(arr, n);//сортировка первого массива
	cout << "Сортированный массив: \n";
	Print(arr, n);//вывод первого массива в упорядоченном состоянии

	//Сдвиг массива на заданное число элементов
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);//вывод сдвинутого массива на экран
	cout << endl;

	/*Сдвиг вправо*/

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);//заполнение второго массива
	cout << "Исходный массив_2: \n";
	Print(brr, m);//вывод первого массива в исходном состоянии
	Sort(brr, m);//сортировка первого массива
	cout << "Сортированный массив_2: \n";
	Print(brr, m);//вывод первого массива в упорядоченном состоянии

	//сдвиг второго массива
	cout << "\nВведите количество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(brr, m, number_of_shifts);
	Print(brr, m);//Выводим сдвинутый массив на экран

	/* HomeWork */
	// Сумма элементов массива
	cout << "\nСумма элементов массива: " << Sum(arr, n) << endl;
	// Среднее арифметическое
	cout << "Среднее арифметическое значение: " << Avg(arr, n) << endl;
	// Минимальное значение
	cout << "Минимальное значение: " << Min(arr, n) << endl;
	// Максимальное значение
	cout << "Максимальное значение: " << Max(arr, n) << endl;
}


	void FillRand(int arr[], const int n, int MinRand, int MaxRand)
	{
		//Заполняем массив случайными числами
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand()% (MaxRand-MinRand) + MinRand;
		}
	}

	void FillRand(double arr[], const int n, int MinRand, int MaxRand)
	{
		//Заполняем массив случайными числами
		MinRand *= 100;
		MaxRand *= 100;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (MaxRand - MinRand) + MinRand;
			arr[i] /= 100;
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

	void Print(double arr[], const int n)
	{
		//Выводим массив на экран
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	void ShiftLeft(int arr[], const int n, const int number_of_shifts) {
		//Циклический сдвиг влево
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

	void ShiftRight(int arr[], const int n, const int number_of_shifts) {
		//Циклический сдвиг вправо
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
	void ShiftRight(double arr[], const int n, const int number_of_shifts) {
		//Циклический сдвиг вправо
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

	void Sort(int arr[], const int n) {
		//метод перебора
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (arr[j] < arr[i]) {
					// меняем элементы местами
					int buffer = arr[i];
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
		double sum = 0;
		for (int i = 0; i < n; i++) sum = sum + arr[i];	
		return sum;
	}


	double Avg(int arr[], const int n) {
		// Cреднее арифметическое
		/*int sum = Sum(arr, n);
		double avg = sum / n;
		return avg;*/
		return (double)Sum(arr, n) / n;
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


	int Max(int arr[], const int n) {
		// Максимальное значение
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max) max = arr[i];
		}
		return max;
	}
	