#include<iostream>
using namespace std;

void FillRand(int arr[], const int n)
{
	//��������� ������ ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void Print(int arr[], const int n)
{
	//������� ������ �� �����
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
	FillRand(arr, n);//���������� ������� �������
	Print(arr, n);//����� ������� ������� � �������� ���������
	
	//����� ������� �� �������� ����� ���������
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	Shift(arr, n, number_of_shifts);
	Print(arr, n);//����� ���������� ������� �� �����

	//////////////////////////

	const int m = 8;
	int brr[m];
	FillRand(brr, m);//���������� ������� �������
	Print(brr, m);//����� ������� �������
	
	//����� ������� �������
	cout << "\n������� ���������� �������: "; cin >> number_of_shifts;
	Shift(brr, m, number_of_shifts);
	Print(brr, m);//������� ��������� ������ �� �����
}