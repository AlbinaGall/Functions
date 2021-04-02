#include "FillRand.h"
#include<iostream>


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
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
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
