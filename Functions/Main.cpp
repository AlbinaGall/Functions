#include<iostream>
using namespace std;

#include "FillRand.h"
#include "UniqRandom.h"
#include"Print.h"
#include"Print.cpp"
#include"Shift.h"
#include"Shift.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Statistic.h"
#include"Statistic.cpp"



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
	//FillRand(arr, n);
	UniqRandom(arr, n);
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
