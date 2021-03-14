#include<iostream>
using namespace std;

/*void FillRand(int arr[], const int n)
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

void ShiftLeft(int arr[], const int n, const int number_of_shifts){
	//����������� ����� �����
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
	//����������� ����� ������
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
	//���������� �������
	int buffer = 0;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			if (arr[j] > arr[j + 1]) {
				// ������ �������� �������
				buffer = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buffer;
			}
		}
	}
}


double Sum(int arr[], const int n) {
	// C���� ��������� �������
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}


double Avg(int arr[], const int n) {
	// C������ ��������������
	double sum = Sum(arr, n);
	double avg = sum / n;
	return avg;
}


double Min(int arr[], const int n) {
	// ����������� ��������
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


double Max(int arr[], const int n) {
	// ������������ ��������
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
*/
//���������� �������
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
	FillRand(arr, n);//���������� ������� �������
	cout << "�������� ������: \n";
	Print(arr, n);//����� ������� ������� � �������� ���������
	Sort(arr, n);//���������� ������� �������
	cout << "������������� ������: \n";
	Print(arr, n);//����� ������� ������� � ������������� ���������

	//����� ������� �� �������� ����� ���������
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);//����� ���������� ������� �� �����
	cout << endl;

	/*����� ������*/

	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300);//���������� ������� �������
	cout << "�������� ������_2: \n";
	Print(brr, m);//����� ������� ������� � �������� ���������
	Sort(brr, m);//���������� ������� �������
	cout << "������������� ������_2: \n";
	Print(brr, m);//����� ������� ������� � ������������� ���������

	//����� ������� �������
	cout << "\n������� ���������� �������: "; cin >> number_of_shifts;
	ShiftRight(brr, m, number_of_shifts);
	Print(brr, m);//������� ��������� ������ �� �����

	/* HomeWork */
	// ����� ��������� �������
	cout << "\n����� ��������� �������: " << Sum(arr, n) << endl;
	// ������� ��������������
	cout << "������� �������������� ��������: " << Avg(arr, n) << endl;
	// ����������� ��������
	cout << "����������� ��������: " << Min(arr, n) << endl;
	// ������������ ��������
	cout << "������������ ��������: " << Max(arr, n) << endl;
}


	void FillRand(int arr[], const int n, int MinRand, int MaxRand)
	{
		//��������� ������ ���������� �������
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand()% (MaxRand-MinRand) + MinRand;
		}
	}

	void FillRand(double arr[], const int n, int MinRand, int MaxRand)
	{
		//��������� ������ ���������� �������
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
		//������� ������ �� �����
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	void Print(double arr[], const int n)
	{
		//������� ������ �� �����
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	void ShiftLeft(int arr[], const int n, const int number_of_shifts) {
		//����������� ����� �����
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
		//����������� ����� ������
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
		//����������� ����� ������
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
		//����� ��������
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (arr[j] < arr[i]) {
					// ������ �������� �������
					int buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}

	void Sort(double arr[], const int n) {
		//����� ��������
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (arr[j] < arr[i]) {
					// ������ �������� �������
					double buffer = arr[i];
					arr[i] = arr[j];
					arr[j] = buffer;
				}
			}
		}
	}


	int Sum(int arr[], const int n) {
		// C���� ��������� �������
		double sum = 0;
		for (int i = 0; i < n; i++) sum = sum + arr[i];	
		return sum;
	}


	double Avg(int arr[], const int n) {
		// C������ ��������������
		/*int sum = Sum(arr, n);
		double avg = sum / n;
		return avg;*/
		return (double)Sum(arr, n) / n;
	}


	int Min(int arr[], const int n) {
		// ����������� ��������
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min) min = arr[i];
		}
		return min;
	}


	int Max(int arr[], const int n) {
		// ������������ ��������
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max) max = arr[i];
		}
		return max;
	}
	