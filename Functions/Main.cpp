#include<iostream>
using namespace std;


void FillRand(char arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(int arr[], const int n, int MinRand=0, int MaxRand=100);
void FillRand(float arr[], const int n, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[], const int n, int MinRand=0, int MaxRand=100);

template<typename T> void Print(T arr[], const int n);
/*void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);*/

template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts);
/*void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(float arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);*/

template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts);
/*void ShiftRight(int arr[], const int n, const int number_of_shifts);
void ShiftRight(float arr[], const int n, const int number_of_shifts);
void ShiftRight(double arr[], const int n, const int number_of_shifts);*/

template<typename T> void Sort(T arr[], const int n); 
/*void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);*/

template<typename T> T Sum(T arr[], const int n);
/*float Sum(float arr[], const int n);
double Sum(double arr[], const int n);*/

template<typename T> double Avg(T arr[], const int n);
/*double Avg(float arr[], const int n);
double Avg(double arr[], const int n);*/

template<typename T> T Min(T arr[], const int n);
/*int Min(int arr[], const int n);
float Min(float arr[], const int n);
double Min(double arr[], const int n);*/

template<typename T> T Max(T arr[], const int n);
/*int Max(int arr[], const int n);
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
	cout << "�������� ������: \n";
	Print(carr, n);
	Sort(carr, n);
	cout << "������������� ������: \n";
	Print(carr, n);

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(carr, n, number_of_shifts);
	Print(carr, n);
	cout << endl;
	cout << "����������� ��������: " << Min(carr, n) << endl;
	cout << "������������ ��������: " << Max(carr, n) << endl;
	
	//INT
	int arr[n];
	FillRand(arr, n);
	cout << "�������� ������: \n";
	Print(arr, n);
	Sort(arr, n);
	cout << "������������� ������: \n";
	Print(arr, n);

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << endl;
	cout << "\n����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << Min(arr, n) << endl;
	cout << "������������ ��������: " << Max(arr, n) << endl;

	//FLOAT
	float farr[n];
	FillRand(farr, n);
	cout << "�������� ������: \n";
	Print(farr, n);
	Sort(farr, n);
	cout << "������������� ������: \n";
	Print(farr, n);

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(farr, n, number_of_shifts);
	Print(farr, n);
	cout << endl;
	cout << "\n����� ��������� �������: " << Sum(farr, n) << endl;
	cout << "������� �������������� ��������: " << Avg(farr, n) << endl;
	cout << "����������� ��������: " << Min(farr, n) << endl;
	cout << "������������ ��������: " << Max(farr, n) << endl;

	//DOUBLE - ����� ������

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);
	cout << "�������� ������_2: \n";
	Print(brr, m);
	Sort(brr, m);
	cout << "������������� ������_2: \n";
	Print(brr, m);
	
	//����� �������
	cout << "\n������� ���������� �������: "; cin >> number_of_shifts;
	ShiftRight(brr, m, number_of_shifts);
	Print(brr, m);

	cout << "\n����� ��������� �������: " << Sum(brr, n) << endl;
	cout << "������� �������������� ��������: " << Avg(brr, n) << endl;
	cout << "����������� ��������: " << Min(brr, n) << endl;
	cout << "������������ ��������: " << Max(brr, n) << endl;
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

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void ShiftLeft(T arr[], const int n, const int number_of_shifts) {
		for (int i = 0; i < number_of_shifts; i++)
		{
			T buffer = arr[0];
			for (int j = 0; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = buffer;
		}
	}

template<typename T>
void ShiftRight(T arr[], const int n, const int number_of_shifts) {
	for (int i = 0; i < (n - number_of_shifts); i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void Sort(T arr[], const int n) {
	//����� ��������
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				// ������ �������� �������
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n) {
	// C���� ��������� �������
	T sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	return sum;
}

template<typename T>
double Avg(T arr[], const int n) {
		// C������ ��������������
		return (double)Sum(arr, n) / n;
}

template<typename T>
T Min(T arr[], const int n) {
	// ����������� ��������
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

template<typename T>
T Max(T arr[], const int n) {
	// ������������ ��������
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
